#include<stdio.h>
int main()
{
     int count=0,i,n;
     printf("Enter a number:");
     scanf("%d",&n);
     while(n!=0)
     {
          i=n%10;
          count++;
          n=n/10;
     }
     printf("Digits in number is: %d",count);
     return 0;
}

