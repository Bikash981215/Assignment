#include<stdio.h>
int main()
{
     int i,j;
     for(i=1;i<=5;i++)
     {
          for(j=1;j<=9;j++)
          {
               if(i==4&&j==4){
                    printf(" ");
                    continue;
               }
               if(i==3&&j>=4&&j<=6){
                    printf(" ");
                    continue;
               }
               if(i==2&&j>=3&&j<=7){
                    printf(" ");
                    continue;
               }
               if(j>=i&&j<=10-i){
                    printf("*");

               }
               else
                    printf(" ");
          }
          printf("\n");
     }
     return 0;
}



