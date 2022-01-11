#include<iostream>
using namespace std;


int number_ways(int n)
{
    if(n==0 || n==1 || n==2 || n==3)
    return 1;

    int ans=number_ways(n-1) + number_ways(n-4);
    return ans;
}

int main()
{
    int  n;
    cin>>n;
    cout<<number_ways(n);
    return 0;
}