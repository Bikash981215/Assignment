#include<stdio.h>
void binary(int);
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
        binary(a);
}
void binary(int a)
{
   if(a>0){
       binary(a/2);
       printf("%d",a%2);
   }

}
