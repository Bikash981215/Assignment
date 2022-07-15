#include<stdio.h>
int main()
{
     double sub1,sub2,sub3,sub4,sub5;
     printf("Enter marks of 5 subjects:");
     scanf("%lf%lf%lf%lf%lf",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(sub1<33||sub2<33||sub3<33||sub4<33||sub5<33)
    {
         printf("Failed!!!");
    }
    else
    {
         printf("passed!!!");
    }
    return 0;

}
