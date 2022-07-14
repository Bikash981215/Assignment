#include<stdio.h>
int main()
{
     int digit,n,rotate;
     printf("enter digits:");
     scanf("%d",&digit);
     n=digit%10;
     digit=digit/10;
     rotate=n*100+digit;
     printf("results is %d",rotate);
     return 0;
}
