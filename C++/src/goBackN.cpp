#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int main()
{

    int N,m;
    int Window_size;
    cout<<"Enter the number of Frames to be Transmitted: ";
    cin>>N;
    cout<<"Enter the value of m: ";
    cin>>m;
    Window_size = pow(2,m)-1;
    cout<<"Window Size : " << Window_size << endl << endl;
    int i=0;
    int sent=0;
 
    while(sent<Window_size && sent+i<=N)
    {

        cout<<"Transmitting Frame "<<sent + i << endl;
        sent++;
            
    }
    cout << endl;
    while(i<N)
    {
        // srand(time(0));
        int s = rand() % 7 + 1;
        int r = rand() % 7 + 1;
        int timer = s + r + 2;

        if (timer<=12 && s<=5 && r<=5)
        {
            cout << "Timer has started" << endl;
            cout << "ACK " << i+1 << " received" << endl << endl;
            // cout << "\nACK" << i+1;
            // cout << "\n";

            // if(i == N-1)
            //     cout << "ACK " << i+1 << endl;

            if((i+Window_size)<N)
            {
                cout << "Transmitted Frame " << i+Window_size << endl;
                cout << "\n";
            }
            i=i+1;
        }
        else if(s > 5)
        {
            cout << "Timer has started" << endl;
            cout << "Lost frame" << i << endl;
            cout << "Timer has expired" << endl << endl;
            sent = 0;
            while ((sent < Window_size) && ((sent+i) < N))
            {
                cout << "Retransmitting Frame " << sent + i << endl;
                sent++;
            }
            cout << endl;
        }
        else if(r > 5)
        {
            cout << "Timer has started" << endl;
            cout << "Lost ACK" << endl;
            cout << "Timer has expired" << endl << endl;
            // cout << "Retransmitting ";
            sent = 0;
            while (sent < Window_size && sent + i < N)
            {
                cout << "Retransmitting Frame " << sent + i << endl;
                sent++;
            }  
            cout << endl; 
        }

    }
    cout << "Frames were succesfully transmitted" <<endl; 
}