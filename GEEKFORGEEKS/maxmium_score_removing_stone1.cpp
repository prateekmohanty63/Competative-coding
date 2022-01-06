#include<iostream>


using namespace std;

int smallest(int x, int y, int z) {

  int small = 99999;

  if (x < small)
    small=x;
  if (y < small)
    small=y;
  if(z < small)
    small=z;

  return small;
}

int largest(int x, int y, int z) {

  int smallest = -1;

  if (x > smallest)
    smallest=x;
  if (y > smallest)
    smallest=y;
  if(z > smallest)
    smallest=z;

  return smallest;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int min1=smallest(a,b,c);
     int max1=largest(a,b,c);


    int score=0;

    if(min1==a)
    a*=100000;
    else if(min1==b)
    b*=100000;
    else{
        c*=100000;
    }

    while(min1!=0)
    {
        if(min1>0){
            min1--;
            max1--;
        score++;
        }
    }
     int min2=smallest(a,b,c);
    int max2=largest(a,b,c);

    while(min2!=0){
        if(min2>0){
            min2--;
            max2--;
            score++;
        }
    }
    cout<<score;
}