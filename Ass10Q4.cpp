#include<iostream>
using namespace std;

void nNatural(int);
int main()
{
int n;
cout<<"Enter number:";
cin>>n;
nNatural(n);
return 0;
}
void nNatural(int r)
{
     int i;
     for(i=1;i<=r;i++){
          cout<<i<<" ";
     }
}
