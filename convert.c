#include <stdio.h>
main()
{
float d,m,c;
int f,i;
printf("Enter the distance between two cities in km: ");
scanf("%f",&d);
m=d*1000;
c=m*100;
i=(int)m*39.37;
f=i/12;
i=i%12;
printf("Distance in meter: %.2f \n",m);
printf("Distance in centimeter: %.2f \n",c);
printf("Distance in feet-inch: %d feet %d inch \n",f,i);
}

