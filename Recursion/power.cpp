#include<iostream>
using namespace std;

int pow(int base,int expo)
{
    if(expo==1)
    return base;

    int ans=base*pow(base,expo-1);

    return ans;
}

int main()
{
    int base,expo;
    cin>>base>>expo;
    cout<<pow(base,expo);
    return 0;
}