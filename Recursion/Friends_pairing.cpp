#include<iostream>
using namespace std;


/// FOR RECURSIVE PROBLEMS ALWAYS FIRST MAKE THE RECURRENCE RELATION

int pairs(int n)
{
    if(n==1 || n==0)
    return 1;

    return pairs(n-1) + (n-1)*pairs(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<pairs(n);
    return 0;
}