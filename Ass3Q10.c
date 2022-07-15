#include<stdio.h>
int main()
{
     double cp,sp,loss,profit,losspercent,profitpercent;
     printf("enter cp and sp:");
     scanf("%lf%lf",&cp,&sp);
     if(cp>sp)
     {
          loss=cp-sp;
          losspercent=100*loss/cp;
          printf("Loss percentage is %.2lf",losspercent);
          printf("%%");
     }
     if(cp<sp)
     {
          profit=sp-cp;
          profitpercent=100*profit/cp;
          printf("profit percentage is %.2lf",profitpercent);
          printf("%%");
     }
     return 0;
}
