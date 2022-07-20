#include<stdio.h>
int main()
{
     int i,n,f=1;
     printf("Enter a number:");
     scanf("%d",&n);
     i=n;
     while(i!=0)
     {
          f=f*i;
          i--;
     }
     printf("Factorial of %d is %d: ",n,f);
     return 0;
}

