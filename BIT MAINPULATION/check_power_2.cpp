#include<iostream>

using namespace std;

bool isPower(int n){
    int mask=n-1;

    if(n & (n-1)==0)
    return true;

    return false;
}

int main()
{
   int n;
   cin>>n;

  if(isPower(n)==true){
      cout<<"Power of 2";
  }
  else{
      cout<<"Not power of 2";
  }
}