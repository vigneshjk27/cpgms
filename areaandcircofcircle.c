#include<stdio.h>
int main()
{
float r,area,circumference;
printf("enter the radius of the circle\n");
scanf("%f", &r);
area=3.141*r*r;
printf("area of the circle=%f\n", area);
circumference=2*3.141*r;
printf("circumference of the circle=%f\n", circumference);
}
