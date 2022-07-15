#include<stdio.h>
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     if(n%3==0&&n%2==0)
     {
          printf("Divisible");
     }
     else
     {
          printf("Not divisible");
     }
     return 0;
}
