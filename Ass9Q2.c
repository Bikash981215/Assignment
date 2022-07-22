#include<iostream.h>
using namespace std;
int main()
{
     int n,a,b;
     cout<<"1.Addition"<<endl;
     cout<<"2.Subtraction"<<endl;
     cout<<"3.Multiplication"<<endl;
     cout<<"4.Division"<<endl;
     cout<<"5.Exit"<<endl;

     cout<<endl<<endl<<"Enter your choice:";
     cin>>n;
     switch(n)
     {
     case 1:
          cout<<"Enter two number:";
          cin>>a>>b;
          cout<<"Addition is:"<<a+b;
          break;
     case 2:
         cout<<"Enter two number:";
         cin>>a>>b;
         cout<<"Subtraction is:"<<a-b;
         break;
     case 3:
         cout<<"Enter two number:";
         cin>>a>>b;
         cout<<"Multipication is:"<<a*b;
         break;
     case 4:
         cout<<"Enter two number:";
         cin>>a>>b;
         cout<<"division is:"<<a/b;
         break;
     case 5:
          exit(0);
     default:
          cout<<"Invalid choice";
     }
}
