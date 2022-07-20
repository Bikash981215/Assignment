#include<stdio.h>
int main()
{
     int Arm=0,n,i,j;
     printf("Enter a number:");
     scanf("%d",&n);
     i=n;
     while(i!=0)
     {
          j=i%10;
          Arm=Arm+j*j*j;
          i=i/10;
     }
     if(Arm==n)
          printf("Armstrong number");
     else
          printf("Not Armstrong number");
     return 0;
}
