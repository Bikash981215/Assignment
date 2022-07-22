
#include<stdio.h>
int main()
{
     int i,j,k;
     for(i=1;i<=5;i++)
     {
          for(j=1;j<=9;j++)
          {
               if(i==2&&j==5){
                    printf(" ");
                    continue;
               }
               if((i==3&&j==4)||(i==3&&j==5)||(i==3&&j==6)){
                    printf(" ");
                    continue;
               }
               if((i==4&&j==3)||(i==4&&j==4)||(i==4&&j==5)||(i==4&&j==6)||(i==4&&j==7)){
                    printf(" ");
                    continue;
               }
               if(i==4&&j==4){
                    printf(" ");
                    continue;
               }
               if(j>=6-i&&j<=4+i){
                    printf("*");

               }
               else
                    printf(" ");
          }
          printf("\n");
     }
     return 0;
}


