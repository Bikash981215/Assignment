
#include<stdio.h>
int main()
{
     int i,j,k;
     for(i=1;i<=5;i++)
     {
          for(j=1;j<=5;j++)
          {
               if(i==3&&j==2){
                         printf(" ");
                    continue;
               }
               if(i==4&&j==2){
                    printf(" ");
                    continue;
               }
               if(i==4&&j==3){
                    printf(" ");
                    continue;
               }
               if(j>=1&&j<=i){
                    printf("*");

               }
               else
                    printf(" ");
          }
          printf("\n");
     }
     return 0;
}
