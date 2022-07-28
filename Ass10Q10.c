#include<stdio.h>
void primefactor(int);
int main()
{
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     primefactor(n);
     return 0;
}
void primefactor(int a)
{
     int i=2;

          while(a!=1)
          {
             if(a%i==0)
                    printf("%d ",i);
             if(a%i!=0)
                  i++;
             else
                 a/=i;
          }

}
