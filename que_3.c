/*Scan a character,an integer and a fraction values from user.
Scan these values in the following sequence.
1=char , int , float
2=int , char , float
See the difference in both sequences.
*/

#include<stdio.h>
int main()
{
	int in;
	char ch;
	float fr;
	puts("Enter a charachter, integer and a fraction:");
	scanf("%d%c%f",&ch,&in,&fr);
	
	return 0;
}

/*result: only first input is taken and the program ends (after shuffling the sequence).*/ 
