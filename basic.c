#include <stdio.h>
main()
{
float ba,da,hra,pf;
printf("Enter your basic salary ");
scanf("%f",&ba);
da=(40*ba)/100;
hra=(20*ba)/100;
pf=(5*ba)/100;
ba=ba+da+hra-pf;
printf("Your DA: %.2f \n",da);
printf("Your HRA: %.2f \n",hra);
printf("Your PF: %.2f \n",pf);
printf("Your Gross Salary: %.2f \n",ba);
}
