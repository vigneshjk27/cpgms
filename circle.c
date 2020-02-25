#include <stdio.h>
float main()
{
float area,circ,rad;
float p=3.412;
printf(" enter the radius of the circle\n");
scanf("%f", &rad);
circ=p*rad*2;
printf("circumference of the circle\n");
printf("%f\n", circ);
area=p*rad*rad;
printf("area of the circle");
printf("%f\n", area);
}
