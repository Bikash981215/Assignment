#include<stdio.h>
int square(int);
int main()
{
     int n,s;
     printf("Enter a number:");
     scanf("%d",&n);
     s=square(n);
     printf("square is:%d",s);
     return 0;
}
int square(int a)
{
     return a*a;
}
