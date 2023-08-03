/*WAP to declare 2 variables.Initialize them and print their values.
Violate all the rules given about variables.Check what compiler is 
giving message on each violation.*/

#include<stdio.h>
int main()
{
	int a,b;
	puts("Enter the numbers:");
	scanf("%d%d",&a,&b);
	printf("%d %d",a,b);
	return 0;
}

/*
1. starting with number-> invalid sufix for a and b;
2. using keyword-> two or more datatype in dclaration specifiers;
3. using operators(symbols)-> undeclared a and b;
4. using space-> expected ';' ;
*/
