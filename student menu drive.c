#include<stdio.h>
struct student
{
	int rollno,p,c,ma,b,average;
	char div, name[30];
	struct mark
	{
		int total;
	}m;
}s;

{

	int i;
	for(i=0;i<5;i++)
	{
	printf("\nEnter Name of student: ");
	scanf("%s",&s[i].name);
	printf("\nEnter Roll.no of student: ");
	scanf("%d",&s[i].rollno);
	printf("\nPhysics marks= ");
	scanf("%d",&s[i].p);
	printf("\nChemistry marks= ");
	scanf("%d",&s[i].c);
	printf("\nMaths marks= ");
	scanf("%d",&s[i].ma);
	printf("\nBiology marks= ");
	scanf("%d",&s[i].b);
	scanf("%d",&s[i].m[i].total);
	}
	total=s[i].m[i];
	average=total/4;
	for(i=0;i<5;i++)
	{
		printf("\nName: %s",&s[i].name);
		printf("\nRoll No: %d",&s[i].rollno);
		printf("\nPhysics= %d",&s[i].p);
		printf("\nChemistry= %d",&s[i].c);
		printf("\nMaths= %d",&s[i].ma);
		printf("\nBiology= %d",&s[i].b);
		printf("\nTotal= %d",&s[i].m[i].total);
		printf("\nAverage= %d",&average);		
	}
}

	

