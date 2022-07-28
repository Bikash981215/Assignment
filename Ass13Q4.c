#include<stdio.h>
int Nsquaresum(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Sum is:%d",Nsquaresum(n));
     return 0;
}
int Nsquaresum(int a)
{
     if(a==1)
          return 1;
       return (a*a)+Nsquaresum(a-1);
}

