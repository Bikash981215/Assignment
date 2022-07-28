#include<stdio.h>
int fact(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("factorial is:%d",fact(n));
     return 0;
}
int fact(int a)
{
     if(a==1)
          return 1;
       return a*fact(a-1);
}


