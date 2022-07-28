#include<iostream>
using namespace std;

int evenodd(int);
int main()
{
int n,e;
cout<<"Enter number:";
cin>>n;
e=evenodd(n);
if(e==1)
cout<<"even";
else
cout<<"odd";

return 0;
}
int evenodd(int r)
{
    if(r%2==0)
     return 1;
    else
     return 0;
}
