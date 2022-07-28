#include<stdio.h>
void RN(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     RN(n);
     return 0;
}
void RN(int a)
{
     if(a>0)
     {
          printf("%d",a%10);
          RN(a/10);

     }
}

