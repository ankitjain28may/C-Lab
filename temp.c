#include <stdio.h>
main()
{
float t;
printf("Enter the temperature in Centigrade: ");
scanf("%f",&t);
t=(9*t)/5;
t=t+32;
printf("Temperature in Farenheit: %.2f",t);
}
