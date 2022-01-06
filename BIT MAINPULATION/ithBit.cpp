#include<iostream>

using namespace std;

int getIthBit(int n,int i)
{
    int mask=1<<i;
    return (n&mask)>0 ? 1 : 0;
}

void clearIthBit(int &n,int i)
{
    int mask=1<<i;

    int neg_mask=~mask;

    n=n&neg_mask;

}

void setIthBit(int &n,int i)
{
    int mask=1<<i;
    n=n|mask;

}

void updateIthBit(int &n,int i,int v)
{
    if(v==0){
        int mask=~(1<<i);
        n=n&mask;
    }
    else{
        int mask=1<<i;
        n=n|mask;

    }
}

int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;

    // cout<<getIthBit(n,i)<<endl;

    // clearIthBit(n,i);
    // cout<<n<<endl;

    // setIthBit(n,i);
    // cout<<n;

    updateIthBit(n,i,1);
    cout<<n;

    
}