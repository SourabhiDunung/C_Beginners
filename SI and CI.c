#include<stdio.h>
#include<math.h>
int main()
{
	float p, r, t, SI, CI;
	printf("Enter principal amount:- \n");
	scanf("%f",&p);
	printf("Enter the rate of interrest:- \n");
	scanf("%f",&r);
	printf("Enter time in years:- \n");
	scanf("%f",&t);
	SI=p*t*r/100;
	CI=p*(pow(1+r/100,t)-1);
	printf("The Simple Interest is: %.2f\n",SI);
	printf("The Compound Interest is: %.2f\n",CI);
	return 0;
}

