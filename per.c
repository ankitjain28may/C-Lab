#include <stdio.h>
main()
{
float a,b,c,d,e,sum;
printf("Enter the marks of five Subjects");
printf("\nEnglish: ");
scanf("%f",&a);
printf("\nMaths: ");
scanf("%f",&b);
printf("\nChemistry: ");
scanf("%f",&c);
printf("\nPhysics: ");
scanf("%f",&d);
printf("\nComputer: ");
scanf("%f",&e);
sum=a+b+c+d+e;
printf("\nTotal marks of the student: %.2f",sum);
sum=sum/5;
printf("\nPercentage of the student: %.2f",sum);
}
