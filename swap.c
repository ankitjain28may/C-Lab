#include <stdio.h>
main()
{ 
printf("Enter two numbers for swapping");
int a,b;
scanf("%d%d",&a,&b);
printf("Numbers before Swapping: A=%d \t B=%d",a,b);
int c=a;
a=b;
b=c;
printf("\nNumbers after Swaping: A=%d \t B=%d",a,b);
}
