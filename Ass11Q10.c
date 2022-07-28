#include<stdio.h>
int main()
{
     int n;
     n=(fact(1)/1)+(fact(2)/2)+(fact(3)/3)+(fact(4)/4)+(fact(5)/5);
     printf("%d ",n);
     return 0;
}
int fact(int a)
{
     int fa=1;
     while(a!=0){
          fa=fa*a;
          a--;
     }
     return fa;
}
