#include<stdio.h>
int digitsum(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Sum is:%d",digitsum(n));
     return 0;
}
int digitsum(int a)
{
     if(a==0)
          return 0;
       return (a%10)+digitsum(a/10);
}


