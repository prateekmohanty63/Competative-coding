#include<iostream>
using namespace std;

/// q)  what should be the minium number of people that should be present in the room
///    so that probability of 2 people having the same birthdays is atleast 50%

/// p= alteast 2 people have same birthday
/// 1-p= all ppl have different birthdays

int main()
{ 
    int n=1;
    int r;
    cin>>r;

    float p=365/365;

    while(1){
        if(p<=1-r)
        break;
        p=p*(365-n)/365;
        cout<<p<<" ";
        n++;
    }

    cout<<n;
    //cout<<birthdayParadox();
    return 0;
}