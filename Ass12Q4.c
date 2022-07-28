#include<stdio.h>
void nRoddNatural(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     nRoddNatural(n);
     return 0;
}
void nRoddNatural(int a)
{
     if(a>0)
     {
          printf("%d ",2*a-1);
          nRoddNatural(a-1);
     }
}

