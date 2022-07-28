#include<iostream>
using namespace std;

void nodd(int);
int main()
{
int n;
cout<<"Enter number:";
cin>>n;
nodd(n);
return 0;
}
void nodd(int r)
{
     int i;
     for(i=1;i<=r;i++){
          cout<<2*i-1<<" ";
     }
}

