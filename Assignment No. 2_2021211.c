#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the 1st numbers:- ");
	scanf("%f",&a);
	printf("Enter the 2nd numbers:- ");
	scanf("%f",&b);
	printf("Enter the 3rd numbers:- ");
	scanf("%f",&c);
	if(a>b&&a>c)
	printf("%f is maximum",a);
	else if(b>a&&b>c)
	printf("%f is maximum",b);
	else
	printf("%f is maximum",c);
	return 0;
}

