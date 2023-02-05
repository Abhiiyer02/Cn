#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    double qSize,qLimit,drop,curr_size=0,s=0;
    int nop,min,max,r;
    float avg;
    cout << "Enter q size :" << endl;
    cin >> qSize;
    qLimit = 0.65*qSize;
    cout << "Queue Threshold Set to : " << qLimit << endl;
    cout << "Enter number of Packets: " << endl;
    cin >> nop;

    for(int i=1;i<=nop ;i++){
        if (curr_size >= qLimit){
            cout << "Congestion detected !!" << endl; 
            min = 0.1*curr_size ;
            max = 0.25*curr_size;
            int r = rand();
            drop = min+(r%max);
            cout << "R : " << r << " min : " << min << " max : " << max << endl;
            cout << "Number of Packets dropped: " << drop << endl;
            curr_size-=drop;
        }
        else 
        {
            cout << "Packet " << i << " Added to queue" << endl;
            curr_size++;
        }
        cout << "Queue size " << curr_size << endl;
        cout << endl;
        sleep(1);
    }

}
