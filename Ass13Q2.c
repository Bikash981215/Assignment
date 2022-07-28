#include<stdio.h>
int Noddsum(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Sum is:%d",Noddsum(n));
     return 0;
}
int Noddsum(int a)
{
     if(a==1)
          return 1;
       return (2*a-1)+Noddsum(a-1);
}

