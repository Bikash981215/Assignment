#include<stdio.h>
int main()
{
     int i,a,b ;
     printf("Enter two number:");
     scanf("%d%d",&a,&b);
     for(i=a;i>=1;i--)
     {
          if(a%i==0&&b%i==0)
               break;
     }
     printf("HCF is %d",i);
     return 0;
}
