#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"CSMA/CA"<<"\n";
    int kmax=15;
    int k=1;
    int flag=1,flag2=0;
    
    while(k<kmax){
        int channel=rand()%2;
        if(channel==1){
            cout<<"Channel is Very Busy\n";
            flag2=1;           
        } 
        else{
            cout<<"Channel is free\n";
            cout<<"Waiting for IFS time\n";
            flag2=0;
        } 
        cout<<"Again checking for idleness\n";
        if(flag2==0){
            int channelidle=rand()%2;
            if(channelidle==0){
                flag=0;
                cout<<"Channel is idle again\n";
            }
            if(flag==0){
                int x= pow(2,k)-1;
                int R= rand()%x;
                cout<<"Waiting for "<<R+1<<" slots\n";
                cout<<"Transmitting the frames....\n";
                int ack= rand()%2;
                if(ack==1) {
                    cout<<"Acknowledgement received\n";
                    k=kmax;
                }
                else{
                    cout<<"Time Out\n";
                    k=k+1;
                }
            }
            else{
                cout<<"Channel is busy now\n";               
            }
            flag=1;           
        }
         cout<<"---------------------------------------------------------------------------------\n"; 
    }
    return 0;
}

