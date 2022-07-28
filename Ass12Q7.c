#include<stdio.h>
void nsquare(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     nsquare(n);
     return 0;
}
void nsquare(int a)
{
     if(a>0)
     {
          nsquare(a-1);
          printf("%d ",a*a);
     }
}
