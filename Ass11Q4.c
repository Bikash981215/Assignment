#include<stdio.h>
int nthprime(int);
int main()
{
    int a,b;
     printf("Enter a numbers:");
     scanf("%d",&a);
     b=nthprime(a);
     printf("Next prime is:%d",b);

     return 0;
}
int nthprime(int a)
{
int i,j;
for(j=a;j<=a*a;j++){
   for(i=2;i<j;i++)
   {
        if(j%i==0)
          break;
   }
   if(i==j)
     break;
}
     return i;
}


