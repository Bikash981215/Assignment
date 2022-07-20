#include<stdio.h>
int main()
{
     int i,j,a,b;
     printf("Enter two number:");
     scanf("%d%d",&a,&b);
     for(j=a;j<=b;j++)
     {
       for(i=2;i<j;i++)
       {
          if(j%i==0){
               break;
          }
       }
       if(i==j)
     printf("%d ",i);
     }
     return 0;
}

