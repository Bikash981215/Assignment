#include<iostream>
using namespace std;
int main()
{
     int var;
     cout<<"Enter a number:";
     cin>>var;
     switch(var)
     {
     case 1:
          cout<<"good";
          break;
     case 2:
          cout<<"better";
          break;
     case 3:
          cout<<"Best";
          break;
     default:
          cout<<"Invalid";
     }
}
