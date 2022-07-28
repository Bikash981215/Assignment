#include<stdio.h>
void noddNatural(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     noddNatural(n);
     return 0;
}
void noddNatural(int a)
{
     if(a>0)
     {
          noddNatural(a-1);
          printf("%d ",2*a-1);
     }
}

