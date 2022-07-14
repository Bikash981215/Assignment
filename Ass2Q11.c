#include<stdio.h>
int main()
{
     int n,digit,a=0;
     printf("enter digits:");
     scanf("%d",&digit);
     printf("enter a number:");
     scanf("%d",&n);
     digit=digit*10+n;
     printf("Results is %d ",digit);
     return 0;
}
