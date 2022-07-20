#include<stdio.h>
int main()
{
     int i=1,n;
     printf("Enter a number:");
     scanf("%d",&n);
     while(i<=2*n)
     {
          printf("%d  ",i);
          i+=2;
     }
     return 0;
}


