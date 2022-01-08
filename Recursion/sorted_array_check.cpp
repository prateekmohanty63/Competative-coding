#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>vec1){
    
    int n =vec1.size();
    if(n==1)
    return true;

    if(vec1[0]<vec1[1])
    return true;

    vector<int>vec2;
     auto start = vec1.begin()+1;
    auto end = vec1.begin() + 3;
  
}

int main()
{
   int n;
   cin>>n;

   vector<int>vec1;

   for(int i=0;i<n;i++){
       int a;
       cin>>a;
       vec1.push_back(a);
   }
   cout<<isSorted(vec1);
}