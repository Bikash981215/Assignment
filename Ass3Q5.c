#include<stdio.h>
int main()
{
     int n;
     printf("Enter 3-digit number:");
     scanf("%d",&n);
     if(n/10<1)
     {
          printf("Not 3-digit nummber");
     }
     else if(n/100<1)
     {
          printf("Not 3-digit number");
     }
     else if(n/1000<1)
     {
          printf("3-digit number");
     }
     else
     {
          printf("Not 3-digit number");
     }
     return 0;
}
