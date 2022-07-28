#include<stdio.h>
void nevenNatural(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     nevenNatural(n);
     return 0;
}
void nevenNatural(int a)
{
     if(a>0)
     {
          nevenNatural(a-1);
          printf("%d ",2*a);
     }
}

