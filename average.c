#include<stdio.h>
void main()
{
char s[30];
float m1,m2,m3,total,average;
printf("enter the name\n");
scanf("%s", s);
printf("enter marks1\n");
scanf("%f", &m1);
printf("enter marks2\n");
scanf("%f", &m2);
printf("enter marks3\n");
scanf("%f", &m3);
printf("name is=%s", s);
total=m1+m2+m3;
printf("total=%f", total);
average=total/3;
printf("average=%f", average);
}
