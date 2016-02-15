#include <stdio.h>
main()
{
int n=0,r=0,s=0;
printf("Enter a three digit binary number to convert  it into decimal");
scanf("%d",&n);
r=n%10;
s=r;
n=n/10;
r=n%10;
s=s+(r*2);
n=n/10;
s=s+(n*4);
printf("Decimal Equivalent of the entered number is %d\n",s);
}
