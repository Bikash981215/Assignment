#include<stdio.h>
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     while(n>=1)
     {
          printf("%d  ",2*n);
          n-=1;
     }
     return 0;
}




