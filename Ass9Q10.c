#include<stdio.h>
int main()
{
     int a,b,c,ch;
     float n;
     printf("\nEnter value of a,b,c:");
     scanf("%d%d%d",&a,&b,&c);
     n=b*b-4*a*c;
     if(n>0)
          printf("Enter 1:");
     else if(n=0)
          printf("Enter 2:");
     else
          printf("Enter 3:");
     printf("\nEnter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
          printf("\nTwo distinct real root");
          break;
     case 2:
          printf("\one repeated real root");
          break;
     case 3:
          printf("\n complex root");
          break;
     default:
          printf("Invalid choice");
     }
}
