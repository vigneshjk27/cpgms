#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a and b\n");
scanf("%d%d", &a, &b);
if(a<b)
{
printf("a is smaller\n");
}
else
{printf("b is smaller\n");
}
if(a<=b)
{
printf("a is smaller than or equal to b\n");
}
else
{
printf("b is smaller than or equal to a\n");
}
}
