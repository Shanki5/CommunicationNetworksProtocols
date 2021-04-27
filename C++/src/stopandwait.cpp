#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Receiver
{
    int m_RxSequenceHeader;
    public:
    Receiver()
    {
        m_RxSequenceHeader = 0;
    }

    int Rx(int tx)
    {
        
        int error = rand() % 2;
        switch (error)
        {
        case 0:
            if(m_RxSequenceHeader == tx)
            {
                cout << "Message Received Succesfully" << endl;
                m_RxSequenceHeader = !m_RxSequenceHeader;
            }   
            else 
                cout << "Message Received with error" << endl;
                // m_RxSequenceHeader = !m_RxSequenceHeader;
            break;
        case 1:
            cout << "Message Not Received" << endl;
            return 2;
            break;
        default:
            break;
        }
        return m_RxSequenceHeader;
    }
    void Ack()
    {

    }
};

class Transmitter
{
    int m_TxSequenceHeader;
    int frameCount;
    public:
    Transmitter(int a = 0, int b = 5):m_TxSequenceHeader(a), frameCount(b) {}
    void LogTx(int rx,int i)
    {
        if(rx == m_TxSequenceHeader)
        {
            cout << "Transmitting frame " << i << " with sequence number " << m_TxSequenceHeader << endl;
        }
        else
        {
            cout << "Retransmitting frame " << i << " with sequence number " << m_TxSequenceHeader << endl; 
        }
              
    }
    void Tx()
    {
        Receiver RxObj;
        int rx = 0;
        for(int i = 0; i <frameCount; )
        {
            LogTx(rx,i+1);
            rx = RxObj.Rx(m_TxSequenceHeader);
            int error = rand() % 2;
            if(rx == 2)
                error = 1;
            switch (error)
            {
            case 0:
                cout << "ACK " << rx <<" received" << endl;
                if (rx != m_TxSequenceHeader)
                    m_TxSequenceHeader = !m_TxSequenceHeader;
                    i++;
                break;
            case 1:
                cout << "ACK not received" << endl;
                cout << "Timer Expired" << endl;
            default:
                break;
            }
            
        } 
    }
};

int main()
{
    int frameCount;
    cout<< "Enter number of frames: ";
    cin >> frameCount;
    Transmitter tx1(0,frameCount);
    tx1.Tx();
    cout << "Frames Transmitted Succesfully";
    getchar();
}