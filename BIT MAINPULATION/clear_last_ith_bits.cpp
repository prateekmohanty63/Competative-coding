#include<iostream>

using namespace std;

// in computer sign bits are stored in 2s complement form

void clearLastIBits(int &n,int i)
{
    int mask=(-1<<i);             /// 1 in binary = 0000000001
    n=n&mask;                     /// 1s complement of 1 = 1111111110
                                  /// 2s complement of 1 = 1111111111
}

void clearithBit(int &n,int i)
{
   int mask=1<<i;
   n=n&mask;
}

void clearBitsRange(int &n,int i,int j)
{
     /// SUPPOSE THE NUMBER IS 111110000011111
     /// WE WANT TO CLEAR BITS BETWEEN i=7 to i=1;
     /// a= 1111111100000000
     /// b=00000000000000001 (2^i-1)
     int a=-1<<j+1;
     int b=1<<i -1;
     int mask=a|b;

     n=n&mask;

}

void replaceBits(int &n,int &m,int i,int j)
{
    clearBitsRange(n,i,j);
    int mask=m<<i;

    n=n|mask;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int i=1,j=3;

    //clearLastIBits(n,5);
     //clearBitsRange(n,1,3);
     replaceBits(n,m,i,j);
    cout<<n;
}