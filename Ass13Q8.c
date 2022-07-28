#include<stdio.h>
void fact(int);
int f=0,x=-1,y=1;
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     fact(n);
     return 0;
}
void fact(int a)
{
     if(a>0){
       f=x+y;
       x=y;
       y=f;
       printf("%d ",f);
       fact(a-1);
     }
}


