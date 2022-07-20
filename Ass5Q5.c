#include<stdio.h>
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     while(2*n-1>=1)
     {
          printf("%d  ",2*n-1);
          n-=1;
     }
     return 0;
}



