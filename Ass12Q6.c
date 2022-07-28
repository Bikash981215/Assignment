#include<stdio.h>
void nRevenNatural(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     nRevenNatural(n);
     return 0;
}
void nRevenNatural(int a)
{
     if(a>0)
     {
          printf("%d ",2*a);
          nRevenNatural(a-1);
     }
}


