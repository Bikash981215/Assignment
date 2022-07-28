#include<stdio.h>
void nprime(int,int);
int main()
{
    int a,b;
     printf("Enter two numbers:");
     scanf("%d%d",&a,&b);
     nprime(a,b);
     return 0;
}
void nprime(int a,int b)
{
int i,j;
for(j=a;j<=b;j++){
   for(i=2;i<j;i++)
   {
        if(j%i==0)
          break;
   }
   if(i==j)
     printf("%d ",i);
  }
}




