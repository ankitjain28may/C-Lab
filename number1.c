#include <stdio.h>
main()
{
int n=0,b=0,c=0,r=0,s=0;
printf("Enter a number less than 300 to check whether it is even, odd, prime or armstrong");
scanf("%d",&n);
b=n;
// Even or not

if(n%2==0)
printf("Entered number is even, ");
else
printf("Entered number is odd, ");

//Prime no. or not

if((n==2 )|| (n==3 )|| (n==5 )|| (n==7 )|| (n==11 )|| (n==13 )|| (n==17 )|| (n==19 )|| (n==23 )|| (n==29 )|| (n==31 )|| (n==37 )|| (n==41 )|| (n==43 )|| (n==47 )|| (n==53 )|| (n==59 )|| (n==61 )|| (n==67 )|| (n==71 )|| (n==73 )|| (n==79 )|| (n==83 )|| (n==89 )|| (n==97 )|| (n==101 )|| (n==103 )|| (n==107 )|| (n==109 )|| (n==113 )|| (n==127 )|| (n==131 )|| (n==137 )|| (n==139 )|| (n==149 )|| (n==151 )|| (n==157 )|| (n==163 )|| (n==167 )|| (n==173 )|| (n==179 )|| (n==181 )|| (n==191 )|| (n==193 )|| (n==197 )|| (n==199 )|| (n==211 )|| (n==223 )|| (n==227 )|| (n==229 )|| (n==233 )|| (n==239 )|| (n==241 )|| (n==251 )|| (n==257 )|| (n==263 )|| (n==269 )|| (n==271 )|| (n==277 )|| (n==281 )|| (n==283 )|| (n==293))
    printf("Prime, ");
else
    printf("Not Prime, "); 

// Armstrong number or not

r=n%10;
n=n/10;
s=s+(r*r*r);
r=n%10;
s=s+(r*r*r);
n=n/10;
s=s+(n*n*n);
if(s==b)
printf("Armstrong.\n");
else
printf("Not Armstrong.\n");
}

