#include<stdio.h>
void octal(int);
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
        octal(a);
}
void octal(int a)
{
   if(a>0){
       octal(a/8);
       printf("%d",a%8);
   }

}
