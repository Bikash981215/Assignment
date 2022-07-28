#include<stdio.h>
int digitpresent(int);
int main()
{
     int n,c;
     printf("Enter a number:");
     scanf("%d",&n);
     c=digitpresent(n);
     if(c)
          printf("present");
     else
          printf("Not");
     return 0;
}
int digitpresent(int a)
{
     int i,g;
            printf("Enter a digit to check:");
            scanf("%d",&g);
     while(a!=0)
     {
          i=a%10;

          if(i==g)
               return 1;
          a=a/10;
     }
     return 0;
}
