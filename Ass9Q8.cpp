#include<iostream>
using namespace std;
int main()
{
     int n,ch;
     cout<<"1.Positive to Negative"<<endl;
     cout<<"2.Negative to positive"<<endl;
     cout<<"3.Exit"<<endl;

     cout<<endl<<endl<<"Enter your choice:";
     cin>>ch;
     switch(ch)
     {
     case 1:
          cout<<"Enter a positive number:";
          cin>>n;
          n=n*-1;
          cout<<n;
          break;
     case 2:
         cout<<"Enter a negative number:";
         cin>>n;
          n=n*-1;
          cout<<n;
          break;
     case 3:
          exit(0);
     default:
          cout<<"Invalid choice";
}
}
