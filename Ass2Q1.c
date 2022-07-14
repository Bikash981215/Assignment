#include<stdio.h>
int main()
{
     int n,unit;
     printf("Enter number:");
     scanf("%d",&n);
     unit=n%10;
     printf("Unit digit is %d ",unit);
     return 0;
}
