#include<stdio.h>
void nRNatural(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     nRNatural(n);
     return 0;
}
void nRNatural(int a)
{
     if(a>0)
     {
          printf("%d ",a);
          nRNatural(a-1);
     }
}
