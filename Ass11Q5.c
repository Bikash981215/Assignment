#include<stdio.h>
void nprime(int);
int main()
{
    int a,b;
     printf("Enter a numbers:");
     scanf("%d",&a);
     nprime(a);
     return 0;
}
void nprime(int a)
{
int i,j;
for(j=1;j<=a;j++){
   for(i=2;i<j;i++)
   {
        if(j%i==0)
          break;
   }
   if(i==j)
     printf("%d ",i);
  }
}



