#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the value of a, b and c\n");
scanf("%d%d%d", &a, &b, &c);
if(a>b&&a>c)
printf("%d is the greatest\n",a);
else if(b>a&&b>c)
printf("%d is the greatest\n",b);
else
printf("%d is the greatest \n",c);
}
