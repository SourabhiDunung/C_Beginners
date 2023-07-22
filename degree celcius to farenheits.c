#include<stdio.h>
int main()
{
	float degrees,farenheits;
	printf("Enter the temperature in degree celcius:- ");
	scanf("%f",&degrees);
	farenheits = (degrees*9/5) + 32;
	printf("%f degrees = %f farenheit ",degrees,farenheits);
}

