#include<iostream>
using namespace std;

int countString(int n)
{
     if(n==1)
     return 2;

     if(n==2)
     return 3;

     return countString(n-1)+countString(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<countString(n);
    return 0;
}