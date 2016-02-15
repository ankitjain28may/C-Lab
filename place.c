#include <stdio.h>
main()
{
int n=0,r=0;
printf("Enter a three digit number to print its place value");
scanf("%d",&n);
r=n%10;
printf("Unit place= %d\n",r);
n=n/10;
r=n%10;
printf("Tenth place= %d\n",r);
n=n/10;
printf("Hundred place= %d\n",n);
}
