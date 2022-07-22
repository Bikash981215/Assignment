#include<stdio.h>
int main()
{
     int i,j,k;
     for(i=1;i<=5;i++)
     { k='A';
          for(j=1;j<=9;j++)
          {
               if(j>=6-i&&j<=4+i){
                    printf("%c",k++);
                    if(j==5||j==6||j==7||j==8)
                         k=k-2;
               }
               else
                    printf(" ");
          }
          printf("\n");
     }
     return 0;
}
