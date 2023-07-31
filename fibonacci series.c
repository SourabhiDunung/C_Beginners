#include<stdio.h>
int main()
{
	int fibo1=0,fibo2=1,fibo3,num,count=0;
	printf("Enter the number of values you want:- ");
	scanf("%d",&num);
	printf("\nThe first %d fibonacci series are:- ",num);
	printf("\n%d",fibo1);
	printf("\n%d",fibo2);
	count=2;
	while(count<num)
	{
		fibo3=fibo1+fibo2;
		count++;
		printf("\n%d",fibo3);
		fibo1=fibo2;
		fibo2=fibo3;
	}
	return 0;
}

