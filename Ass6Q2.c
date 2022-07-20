#include<stdio.h>
int main()
{
     int i=2,n,sum=0;
     printf("Enter a number:");
     scanf("%d",&n);
     while(i<=2*n)
     {
          sum=sum+i;
          i+=2;
     }
     printf("Sum is: %d",sum);
     return 0;
}

