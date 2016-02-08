#include <stdio.h>
#include <math.h>
main()
{
float a,b,c,d,e,f;
printf("Enter a principle,time and rate");
scanf("%f %f %f",&a,&b,&c);
d=(a*b*c)/100;
e=a*(pow(((100+c)/100),b));
e=e-a;
printf("\nCompound Interest: %.2f",e);
printf("\nSimple Interest: %.2f",d);
}
