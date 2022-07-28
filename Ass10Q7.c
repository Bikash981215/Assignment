#include<stdio.h>
long fact(int);
int main()
{
     int n,r;
     long f;
     printf("Enter two number:");
     scanf("%d%d",&n,&r);
     f=fact(n)/(fact(r)*fact(n-r));
     printf("%u ",f);
     return 0;
}
long fact(int n)
{
 long fa=1;
     while(n!=0){
          fa=fa*n;
           n--;
     }
     return fa;
}

