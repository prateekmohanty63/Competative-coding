#include<iostream>
using namespace std;

int fast_power(int base,int expo){
   
   if(expo==1)
   return base;

   int subProb=fast_power(base,expo/2);
   int subProbSq=subProb*subProb;

   if(expo&1){ 
       return base*subProbSq;    // odd number
}
       
   return subProbSq;
}

int main()
{
    int  base,expo;
    cin>>base>>expo;
    cout<<fast_power(base,expo);
    return 0;
}