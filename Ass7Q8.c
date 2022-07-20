#include<stdio.h>
int main()
{
     int i,j,n;
     printf("Enter a number:");
     scanf("%d",&n);
     for(j=n;j<=n*n;j++){
       for(i=2;i<j;i++)
       {
          if(j%i==0){
               break;
          }
       }
       if(i==j){
          printf("%d ",i);
           break;
       }
  }
  return 0;
}
