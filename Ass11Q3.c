#include<stdio.h>
int prime(int);
int main()
{
    int a,b;
     printf("Enter a numbers:");
     scanf("%d",&a);
     b=prime(a);
     if(b)
        printf("prime");
     else
          printf("Non");
     return 0;
}
int prime(int a)
{
int i;
   for(i=2;i<a;i++)
   {
        if(a%i==0)
          break;
   }
   if(i==a)
     return i;
   else
     return 0;
}

