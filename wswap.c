#include <stdio.h>
main()
{
int a,b;
printf("Enter two numbers for swapping");
scanf("%d%d",&a,&b);
printf("Numbers before Swapping: A=%d \t B=%d",a,b);
a=b+a;
b=a-b;
a=a-b;
printf("\nNumbers after Swaping: A=%d \t B=%d",a,b);
}
