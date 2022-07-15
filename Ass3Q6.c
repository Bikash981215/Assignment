#include<stdio.h>
int main()
{
     int a,b;
     printf("Enter two number:");
     scanf("%d%d",&a,&b);
     if(a>b)
     {
          printf("Greatest number is %d",a);
     }
     else if(a==b)
     {
          printf("since both number are same one nummber is %d",a);
     }
     else
     {
          printf("Greatest number is %d",b);
     }
     return 0;
}
