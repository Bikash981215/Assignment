#include<stdio.h>
int main()
{
double a,b,c,x;
printf("Enter values:");
scanf("%lf%lf%lf",&a,&b,&c);
x=b*b-4*a*c;
if(x>0)
{
     printf("Real and distinct");
}
else
{
     printf("Real and equal or imaginary");
}
return 0;
}
