#include<iostream>
#include<vector>
using namespace std;

int binaryCoefficient(int n,int k){

    vector<vector<int>>table(n+1,vector<int>(k+1,0));

    for(int i=0;i<=n;i++){
        for(int j=0;j<=min(i,k);j++){

             if(j==0 || j==i){
                 table[i][j]=1;
             }
             else{
                 table[i][j]=table[i-1][j-1]+table[i-1][j];
             }   
        }
    }
    return table[n][k];
}

int main()
{
    int n,k;
    cin>>n>>k;
    cout<<binaryCoefficient(n,k)<<endl;
    return 0;
}