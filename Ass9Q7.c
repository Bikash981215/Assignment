#include<stdio.h>
int main()
{
     int unit,n,a,b,choice;
     float bill;
     printf("1.First 50 units:\n");
     printf("2.Above 50 and less than 150 units:\n");
     printf("3.Above 150 and less than 250 units:\n");
     printf("4.Above 250 units:\n");
     printf("5.Exit\n");

     printf("\nEnter your choice:");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
      printf("Enter units:");
      scanf("%d",&unit);
         bill=unit*0.50;
         bill=bill*0.20+bill;
         printf("Total bill is:%.2f",bill);
         break;
     case 2:
          printf("Enter units:");
          scanf("%d",&unit);
          a=unit-50;
          bill=a*0.75+25;
          bill=bill*0.20+bill;
          printf("Total bill is:%.2f",bill);
          break;
     case 3:
          printf("Enter units:");
          scanf("%d",&unit);
          a=unit-100;
          n=a-50;
          bill=n*1.20+25+75;
          bill=bill*0.2+bill;
          printf("Total bill is:%.2f",bill);
          break;
     case 4:
          printf("Enter units:");
          scanf("%d",&unit);
          a=unit-100;
          b=a-100;
          n=b-50;
          bill=1.50*n+120+75+25;
          bill=bill*0.2+bill;
          printf("Total bill is %.2f",bill);
     case 5:
          exit(0);
     default:
          printf("Invalid choice");
     }

}
