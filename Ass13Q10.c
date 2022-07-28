#include<stdio.h>
int pow(int,int);
int main()
{
    int a,b,k;
    printf("Enter base value:");
    scanf("%d",&a);
    printf("Enter exponent value:");
    scanf("%d",&b);
    k=pow(a,b);
    printf("%d",k);
}
int pow(int a , int b)
{
     if(b>0)
         return a*pow(a,b-1);
     return 1;
}
