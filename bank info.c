#include<stdio.h>
#include<string.h>
char name[25];
int acc,pin,n,i,bal,pin1,wd,b,cho,depo,a[10];
void accept()
{
	printf("\nEnter number of account holders: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("\nMENU");
	printf("\n1.Display account information\n2.withdraw amount\n3.Deposite amount\n4.Check balance");
	printf("\nEnter your choice: ");
	scanf("%d",&cho);
	printf("\nEnter account number(5-digit): ");
	scanf("%d",&acc);
	printf("\nEnter account holder name: ");
	scanf("%s",&name);
	printf("\nEnter your 4-digit pin: ");
	scanf("%d",&pin);
	printf("\nEnter your initially deposited amount (balance): ");
	scanf("%d",&bal);
	}
}

int display()
{
	printf("\nEnter your pin: ");
	scanf("%d",&pin1);
	if(pin==pin1)
	{
		printf("\nNAME:\t");
		puts(name);
		printf("\nACCOUNT NUMBER:\t%d",acc);
		printf("\nACCOUNT BALANCE:\t%d",bal);
	}	
	else
	{
		printf("\nINCORRECT PIN");
	}	
}

int withdraw()
{
	printf("\nEnter your pin: ");
	scanf("%d",&pin1);
	if(pin==pin1)
	{
		printf("\nEnter the amount you want to withdraw:\t");
		scanf("%d",&wd);
		if(bal>1000&&bal>wd)
		{
			bal=bal-wd;
			printf("\nYOUR CURRENT BALANCE IS: %d\n\nyou should have minimum balance of Rs.1000 in your account",bal);
		}
		else
		{
			printf("\nYou cannot withdraw cash as your account has reached maximum limit");
		}
	
	}	
	else
	{
		printf("\nINCORRECT PIN");
	}	
}

int deposite()
{
	printf("\nEnter your pin: ");
	scanf("%d",&pin1);
	if(pin==pin1)
	{
		printf("\nEnter the amount you want to deposite:\t");
		scanf("%d",&depo);
		bal=bal+depo;
		printf("\nYOUR CURRENT IS:\t%d",bal);
	}	
	else
	{
		printf("\nINCORRECT PIN");
	}		
}

int check()
{
	printf("\nEnter your pin: ");
	scanf("%d",&pin1);
	if(pin==pin1)
	{
		printf("\nYOUR CURRENT BALANCE IS:%d\t",bal);
	}	
	else
	{
		printf("\nINCORRECT PIN");
	}
}

int main()
{
	int ans;
	do
	{
	accept();
	switch(cho)
	{
		case 1:
			display();
			break;
		case 2:
			withdraw();
			break;
		case 3:
			deposite();
			break;
		case 4:
			check();
			break;
		default:
			printf("Select proper choice: ");			
	}
	printf("\n\nDo you want to continue(1/0): ");
	scanf("%d",&ans);
	}
	while(ans==1);
}

