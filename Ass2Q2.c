#include<stdio.h>
int main()
{
     int n,last;
     printf("Enter number");
     scanf("%d",&n);
     last=n/10;
     printf("Given number without last digit is %d",last);
     return 0;
}
