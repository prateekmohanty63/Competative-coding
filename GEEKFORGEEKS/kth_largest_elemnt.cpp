#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> nums, int k) {
  sort(nums.begin(),nums.end(),greater<int>());

//   for(int i=0;i<nums.size();i++)
//   cout<<nums[i]<<" ";
    
   return nums[k-1];
}


int main()
{
    vector<int>nums;
    int k;
    cin>>k;
    for(int i=0;i<9;i++){
         int r;
         cin>>r;
         nums.push_back(r);
    }
   cout<<findKthLargest(nums,k);
}