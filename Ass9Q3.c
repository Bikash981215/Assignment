#include<stdio.h>
int main()
{
   int day;
   printf("Enter a days number:");
   scanf("%d",&day);
   switch(day){
    case 1:
         printf("Have a good monday");
         break;
    case 2:
         printf("Have a good tuesday");
         break;
    case 3:
         printf("Have a good wednesday");
         break;
    case 4:
         printf("Have a good thursday");
         break;
    case 5:
         printf("Have a good friday");
         break;
    case 6:
         printf("Have a good saturday");
         break;
    case 7:
         printf("Have a good sunday");
         break;
    default:
         printf("Invalid choice!!");
    }
}
