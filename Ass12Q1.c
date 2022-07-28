#include<stdio.h>
void nNatural(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     nNatural(n);
     return 0;
}
void nNatural(int a)
{
     if(a>0)
     {
          nNatural(a-1);
          printf("%d ",a);
     }
}
