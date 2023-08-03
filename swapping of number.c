#include<stdio.h>
int main()
	{
	int n,rev=0,rem;
	printf("Enter a 3 digit number:- ");
	scanf("%d",&n);
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	printf("Swapped number = %d ",rev);
}
