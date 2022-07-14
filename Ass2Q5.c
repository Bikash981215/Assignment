#include<stdio.h>
int main()
{
     int n,s=0,a;
     printf("Enter 3-digit number:");
     scanf("%d",&n);
     a=n%10;
     s=s+a;
     n=n/10;
     a=n%10;
     s=s+a;
     n=n/10;
     a=n%10;
     s=s+a;
     printf("Sum of 3-digit is %d",s);
     return 0;
}
