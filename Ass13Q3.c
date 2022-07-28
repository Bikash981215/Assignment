#include<stdio.h>
int Nevensum(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Sum is:%d",Nevensum(n));
     return 0;
}
int Nevensum(int a)
{
     if(a==1)
          return 2;
       return (2*a)+Nevensum(a-1);
}


