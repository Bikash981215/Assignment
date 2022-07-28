#include<stdio.h>
int digit(int);
int count=0;
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("There are %d digit in nummber",digit(n));
     return 0;
}
int digit(int a)
{
     if(a>0){
          count++;
          digit(a/10);
     }
     return count;
}


