#include<stdio.h>
int f1(int,int);
int main()
{
   int k,a,b;
   printf("Enter two number:");
   scanf("%d%d",&a,&b);
   k=f1(a,b);
   printf("%d",k);
   return 0;
}
int f1(int a , int b)
{
 if(a==b)
     return a;
 if(a%b==0)
   return b;
 if(b%a==0)
     return a;
 if(a>b)
     return f1(a%b,b);
 else
     return f1(a,a%b);

}

