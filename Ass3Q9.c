#include<stdio.h>
int main()
{
     int a,b,c;
     printf("enter three number:");
     scanf("%d%d%d",&a,&b,&c);
     if(a>=b&&a>=c)
     {
          printf("Greatest number is %d",a);
     }
     else if(b>=c&&b>=a)
     {
          printf("Greatest number is %d",b);
     }
     else
     {
               printf("Greatest number is %d",c);
     }
     return 0;
}
