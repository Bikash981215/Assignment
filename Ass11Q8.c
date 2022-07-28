#include<stdio.h>
int fact(int n)
{
     int f=1;
     while(n!=0){
          f=f*n;
          n--;
     }
     return f;
}
int comb(int n,int r)
{
     return fact(n)/(fact(r)*fact(n-r));
}
int perm(int n,int r)
{
     return fact(n)/fact(n-r);
}
void pascal(int n)
{
     int i,j,k,r;
     for(i=1;i<=n;i++){
          k=1;r=0;
     for(j=1;j<=2*n-1;j++)
       {
                    if(j>=n+1-i&&j<=n-1+i&&k)
                         {
                         printf("%d",comb(i-1,r));
                         k=0;r++;
                         }
                    else
                    {
                        printf(" ");
                        k=1;
                    }
     }
     printf("\n");
     }
}
int main()
{
     pascal(5);
     return 0;
}
