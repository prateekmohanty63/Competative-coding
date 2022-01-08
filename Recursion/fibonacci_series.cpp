#include<iostream>

using namespace std;

int fibonacciSeries(int n){

    if(n==1 || n==0)
    return n;

    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}


int main()
{
    cout<<fibonacciSeries(6);
}