#include<stdio.h>
int main()
{
     int i,j,k;
     for(i=1;i<=3;i++)
     {
          for(j=1;j<=19;j++)
          {
               if((j>=4-i&&j<=6+i)||(j>=14-i&&j<=16+i)){
                    printf("*");
               }
               else
                    printf(" ");
          }
          printf("\n");
     }
      for(i=1;i<=10;i++)
     {
          for(j=1;j<=19;j++)
          {
               if(i==1&&j==7){
                         printf("M");
                         continue;
               }
               if(i==1&&j==8){
                         printf("y");
                         continue;
               }
               if(i==1&&j==9){
                         printf("S");
                         continue;
               }
               if(i==1&&j==10){
                         printf("i");
                         continue;
               }
               if(i==1&&j==11){
                         printf("r");
                         continue;
               }
               if(i==1&&j==12){
                         printf("G");
                         continue;
               }
               if(j>=i&&j<=20-i){
                    printf("*");
               }
               else
                    printf(" ");
          }
          printf("\n");
     }

     return 0;
}
