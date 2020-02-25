#include <stdio.h>
float main()
{
float a,b,add,sub,div,pro;
printf ("enter two numbers\n");
scanf("%f %f", &a, &b);
add=a+b;
sub=a-b;
div=a/b;
pro=a*b;
printf("addition of two numbers is\n");
printf("%f\n",add);
printf("subtraction of two numbers is\n");
printf("%f\n",sub);
printf("division of two numbers is\n");
printf("%f\n",div);
printf("product of two numbers is\n");
printf("%f\n",pro);
}
