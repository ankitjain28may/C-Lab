#include <stdio.h>
main()
{
int a,r=0;
printf("Enter a 5 digit number to compute the sum of its digits");
scanf("%d",&a);
printf("Sum of the digits of the number: %d is ",a);
while(a!=0)
{
r=r+a%10;
a=a/10;
}
printf("%d \n",r);
}
