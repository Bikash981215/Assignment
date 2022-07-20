#include<stdio.h>
int main()
{
     int i,a,b ;
     printf("Enter two number:");
     scanf("%d%d",&a,&b);
     for(i=a;i>=2;i--)
     {
          if(a%i==0&&b%i==0)
               break;
     }
     if(i==1)
          printf("co-prime");
     else
          printf("Not");
    return 0;
}

