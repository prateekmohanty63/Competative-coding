#include<bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> encoded, int first) {
    
    vector<int>arr;
    arr.push_back(first);
    int n=encoded.size();

    for(int i=0;i<n;i++){
        int a=encoded[i];
        int b=arr[i];

        int c=a^b;
        arr.push_back(c);

    }
    return arr;
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
    int first;
    cin>>first;

    vector<int>res;
    res=decode(vec1,first);

    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}