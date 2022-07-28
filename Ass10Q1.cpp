#include<iostream>
using namespace std;

double areac(int);
int main()
{
double radius;
double area;
cout<<"Enter radius:";
cin>>radius;
area=areac(radius);
cout<<"Area of circle is:"<<area;
return 0;
}
double areac(int r)
{
    double c;
    c= 3.1415*r*r;
    return c;
}
