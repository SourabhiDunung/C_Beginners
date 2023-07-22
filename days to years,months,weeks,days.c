#include<stdio.h>
int main()
{
	int days,weeks,months,years,remDays;
	printf("Enter no. of days:- ");
	scanf("%d",&days);
	years=days/365;
	remDays=days-365*years;
	
	months=remDays/31;
	remDays=remDays-31*months;
	
	weeks=remDays/7;
	remDays=remDays-7*weeks;
	
	days=remDays;
	printf("Years : %d\n",years);
	printf("Months : %d\n",months);
	printf("Weeks : %d\n",weeks);
	printf("Days : %d",days);
	return 0;
}

