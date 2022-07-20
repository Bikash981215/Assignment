#include<stdio.h>
int main()
{
     int i,a,b;
     printf("Enter a number:");
     scanf("%d%d",&a,&b);
     for(i=1;i<=a*b;i++)
     {
          if(i%a==0&&i%b==0){
               break;
          }
     }
     printf("Lcm is: %d",i);
     return 0;
}
