#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int score=0;
    int count_zero=0;

   while((a!=0 && b!=0) || (a!=0 && c!=0) || (b!=0 && c!=0)){
       //cout<<"IN"<<" ";
       cout<<a<<" "<<b<<" "<<c<<endl;
       if((a%2!=0 && b%2!=0)){
            a--;
            b--;
            score++;
       }
        if((a%2!=0 && c%2!=0)){
            a--;
            c--;
            score++;
       }
        if((b%2!=0 && c%2!=0)){
            c--;
            b--;
            score++;
       }


      if(a>=b && b>=c){
          while(c!=0){
              c--;
              a--;
              score++;
          }
           while(b!=0 || a!=0){
               b--;
               a--;
               score++;
           }

      }
       if(b>=c && c>=a){
          while(a!=0){
              b--;
              a--;
              score++;
          }
           while(b!=0 || c!=0){
               b--;
               c--;
               score++;
           }

      }
       if(c>=a && a>=b){
          while(b!=0){
              b--;
              c--;
              score++;
          }
           while(a!=0 || c!=0){
               a--;
               c--;
               score++;
           }

      }

   }
   cout<<score;
}