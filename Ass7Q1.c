#include<stdio.h>
int main()
{
     int n,a=-1,b=1,i,F;
     printf("Enter a number:");
     scanf("%d",&n);
     for(i=1;i<=n;i++){
     F=a+b;
     a=b;
     b=F;
     if(i==n)
     printf("%u  ",F);
     }
return 0;
}
