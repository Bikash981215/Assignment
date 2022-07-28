#include<iostream>
using namespace std;

int fact(int);
int main()
{
int n,N;
cout<<"Enter number:";
cin>>n;
N=fact(n);
cout<<"Factorial is:"<<N;
return 0;
}
int fact(int r)
{
     int i=1;
     while(r!=0){
          i=i*r;
          r--;
     }
     return i;
}

