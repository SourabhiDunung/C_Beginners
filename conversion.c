#include<stdio.h>
int main()
{
// conversion from feets to inches
	float a,inches,b,meters,c,feets;
	printf("Enter the value (in feets) that is to be converted to inches:- ");
	scanf("%f",&a);
	inches=12*a;
	printf("Length in meters = %f\n\n",inches);

// conversion from cm to meters
	printf("Enter the value (in cm) that is to be converted to meters:- ");
	scanf("%f",&b);
	meters=0.01*b;
	printf("Lenght in meters = %f\n\n",meters);
	
// conversion from cm to feets
	printf("Enter the value (in cm) that is to be converted to feets:- ");
	scanf("%f",&c);
	feets=0.0328084*c;
	printf("Lenght in feets = %f\n\n",feets);
}

