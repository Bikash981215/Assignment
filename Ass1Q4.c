#include<stdio.h>
int main()
{
     double radius,area;
     printf("Enter a radius: ");
     scanf("%lf",&radius);
     area=3.1415*radius*radius;
     printf("Area of circle is %lf having the radius %lf",area,radius);
     return 0;
}
