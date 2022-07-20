#include<stdio.h>
int main()
{
     int n,a=-1,b=1,i,F;
     printf("\nEnter a number:");
     scanf("%d",&n);
     for(i=1;i<=n+2;i++){
     F=a+b;
     a=b;
     b=F;
     if(n==F){
        printf("Fibonnaci series");
        break;
     }
     }
     if(n!=F){
          printf("Not");
     }
return 0;

}

