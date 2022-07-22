#include<iostream>
using namespace std;
int main()
{
     int a,b,c,n;
     cout<<"1.a"<<endl;
     cout<<"2.b"<<endl;
     cout<<"3.c"<<endl;
     cout<<"4.d"<<endl;

     cout<<endl<<endl<<"Enter your choice";
     cin>>n;
     switch(n)
     {
     case 1:
          cout<<"Enter three number:";
          cin>>a>>b>>c;
          if(a==b||b==c||a==c)
               cout<<"isosceles triangle";
          else
               cout<<"Not isosceles triangle";
          break;
     case 2:
          cout<<"Enter three number:";
          cin>>a>>b>>c;
          if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
             cout<<"Right angled triangle";
          else
             cout<<"Not Right angled triangle";
          break;
     case 3:
          cout<<"Enter three number:";
          cin>>a>>b>>c;
          if(a==b||a==c||b==c)
             cout<<"Equilateral triangle";
          else
             cout<<"Not Equilateral triangle";
          break;
     case 4:
          exit(0);
     default:
          cout<<"Invalid choice";
     }
}
