#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>vec1;

    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        vec1.push_back(r);
    }
  sort(vec1.begin(),vec1.end());
    int sum=0;
     
     int k=0;
    for(int i=0;i<n-1;i++){
        int x=vec1[0]+vec1[1];
        sum+=x;
         vec1.erase(vec1.begin(),vec1.begin()+2);
         vec1.push_back(x);
    }
   
   cout<<sum<<" "<<vec1[0];

   return 0;

}