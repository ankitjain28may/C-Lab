#include <stdio.h>
main()
{
int a,b;
printf("Enter the value in paise to display in rupee and paise");
scanf("%d",&a);
b=a%100;
a=a/100;
printf("Rupee: %d ,Paise: %d \n",a,b);
}
