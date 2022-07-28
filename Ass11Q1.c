#include<stdio.h>
int LCM(int,int);
int main()
{
    int a,b;
     printf("Enter two numbers:");
     scanf("%d%d",&a,&b);
     printf("LCM is:%d",LCM(a,b));

     return 0;
}
int LCM(int a ,int b)
{
int i;
   for(i=1;i<=a*b;i++)
   {
        if(i%a==0&&i%b==0)
          break;
   }
   return i;
}
