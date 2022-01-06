#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
 
   map<char,int>map1;
   int index=-1;

   for(int i=0;i<s.size();i++){

       if(map1.find(s[i])==map1.end())
       map1[s[i]]=1;
       
       else
       map1[s[i]]++;
   }
  int max=1000;
   for(auto& it:map1){
       if(it.second==1){
           for(int i=0;i<s.size();i++){
               if(s[i]==it.first && i<max)
               max=i;
           }
       }

   }
   if(max==1000)
   return -1;
   return max;
        
}


int main(){
    cout<<firstUniqChar("aabbcc");
}