#include<stdio.h>
int main()
{
	int n1, n2, nu, deno, rem, gcd, lcm;
	printf("Enter two numbers: ");
	scanf("%d%d",&n1,&n2);
	if(n1 > n2)
	{
		nu = n1;
		deno = n2;
	}
	else
	{
		nu = n2;
		deno = n1;
	}
	rem = nu%deno;
	while(rem!=0)
	{
		nu = deno;
		deno = rem;
		rem = nu%deno;
	}
	gcd = deno;
	lcm = n1*n2/gcd;
	printf("\nGCD of %d and %d is: %d",n1,n2,gcd);
	printf("\nLCM of %d and %d is: %d",n1,n2,lcm);
	return 0;
}


