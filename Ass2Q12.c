#include<stdio.h>
int main()
{
     double inr,convert;
     printf("Enter INR:");
     scanf("%lf",&inr);
     convert=inr/76.23;
     printf("USD is %lf",convert);
     return 0;
}
