#include<iostream>
using namespace std;
int main()
{
     int year,n;
     cout<<"1.To find leap year or not:"<<endl;
     cout<<"2.Exit"<<endl;
     cout<<endl<<endl<<"Enter a number:";
     cin>>n;
     switch(n){
     case 1:
          cout<<"Enter a year:";
          cin>>year;
     if(year%4==0)
     {
          if(year%100==0)
          cout<<"NOT leap year";
          else
           cout<<"Leap year";
     }
     else
          cout<<"NOT leap year";
          break;
     case 2:
          exit(0);
     default:
          cout<<"Invalid choice";

     return 0;
}
}
