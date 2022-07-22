#include<stdio.h>
int main()
{
     int n,ch;
     printf("1.Calculation:\n");
     printf("2.Exit\n");

     printf("\nEnter your choice:");
     scanf("%d",&ch);
     switch(ch)
     {
     case 1:
          printf("\nEnter even number:");
          scanf("%d",&n);
          n=n+1;
          printf("\nNearest odd number is:%d",n);
          break;
     case 2:
          exit(0);
     default:
          printf("Invalid choice");
     }
}
