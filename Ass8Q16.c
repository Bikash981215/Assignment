
#include<stdio.h>
int main()
{
     int i,j,k;
     for(i=1;i<=5;i++)
     {
          for(j=1;j<=9;j++)
          {

               if(j==4+i||j==6-i||i==5){
                    printf("*");

               }
               else
                    printf(" ");
          }
          printf("\n");
     }
     return 0;
}


