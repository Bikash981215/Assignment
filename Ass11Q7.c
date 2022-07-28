#include<stdio.h>
void nfibo(int);
int main()
{
     int a;
     printf("Enter a numbers:");
     scanf("%d",&a);
     nfibo(a);
     return 0;
}
void nfibo(int a)
{
int i,x=-1,y=1,f=0;
   for(i=1;i<=a;i++)
   {
     f=x+y;
     x=y;
     y=f;
     printf("%d ",f);
  }
}




