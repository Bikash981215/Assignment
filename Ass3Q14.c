#include<stdio.h>
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     if(n%7==0||n%3==0)
     {
          printf("Divisible");
     }
     else
     {
          printf("Not divisible");
     }
     return 0;
}

