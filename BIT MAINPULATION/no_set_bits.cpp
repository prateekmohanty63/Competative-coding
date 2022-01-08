#include<iostream>

using namespace std;

int setBits(int n){

    int temp=n;
    int count=0;
    int i=1;
     
    while(temp>=1){
       count+=temp&1;
      temp=temp>>1;
    }
    return count;
}

int main()
{
   int n;
   cin>>n;

   cout<<setBits(n);


}