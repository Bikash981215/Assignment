#include<iostream>
using namespace std;

double simpleInterest(int,int,int);
int main()
{
int p,r,t;
double SI;
cout<<"Enter p,r,t:";
cin>>p>>r>>t;
SI=simpleInterest(p,r,t);
cout<<"Simple interest is:"<<SI;
return 0;
}
double simpleInterest(int p,int r,int t)
{
    double c;
    c= p*t*r*0.01;
    return c;
}
