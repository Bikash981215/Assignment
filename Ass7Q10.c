#include<stdio.h>
int main()
{
     int Arm,n,i,j;
     for(n=1;n<=1000;n++){
           i=n;
           Arm=0;
     while(i!=0)
     {
          j=i%10;
          Arm=Arm+j*j*j;
          i=i/10;
     }
      if(Arm==n)
          printf("%d ",Arm);
  }
     return 0;
}

