#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=0,m=0;
    string arr[2]={" lost", " received with error"};
    cout<<"Enter the number of frames: ";
    cin>>n;
    cout<<"Enter the value of m: ";
    cin>>m;
    int w = pow(2,m-1);

    for(int i=1; i<=w; i++){
        cout<<"Frame "<<i<<" Transmitted\n" ;
    }
    int i=w,neg=0,win_start=0;
    while (i<=n){
        int s=rand()%10+1;
        if (s<6)
            {
                if(i-win_start==w || i==n) {
                    cout<<"PAK of frame "<<i<<" received\n";
                    win_start=i;
                }
                i++;
                if(i<=n) cout<<"Frame "<<i<<" Transmitted\n";
            }
        else{
            int error= rand()%2;
            cout<<"Frame "<<i<<arr[error]<<"\n";
            cout<<"NAK of frame "<<i<<" received\n";
            cout<< "Frame "<<i<<" retransmitted\n";
        }
    }
    cout<<"Frames were successfully transmitted\n";
    return 0;
}
