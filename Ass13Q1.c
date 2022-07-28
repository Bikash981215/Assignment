#include<stdio.h>
int Nsum(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Sum is:%d",Nsum(n));
     return 0;
}
int Nsum(int a)
{
     int sum;
     if(a==1)
          return 1;
     sum=a+Nsum(a-1);
     return sum;
}
