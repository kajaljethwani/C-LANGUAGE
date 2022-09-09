//WA menu driven  program the perform arithmatic oprations:+,-,*,/,%
#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	int x,y;
	clrscr();
	printf("\nEnter the choice: \n'a' or 'A' for addition.");
	printf("\n's' or 'S' for subtraction.");
	printf("\n'm' or 'M' for multiplication.");
	printf("\n'd' or 'D' for division.");
	printf("\n'r' or 'R' for remainder.\n");
	scanf("%c",&c);
	printf("\nEnter first no: ");
	scanf("%d",&x);
	printf("\nEnter second no: ");
	scanf("%d",&y);
	switch(c)
	{
		case 'a':
		case 'A':
			printf("\nAddition is %d.",x+y);
			break;

		case 's':
		case 'S':
			printf("\nSubtraction is %d.",x-y);
			break;

		case 'm':
		case 'M':
			printf("\nMultiplication is %d.",x*y);
			break;

		case 'd':
		case 'D':
			printf("\nDivision is %d.",x/y);
			break;

		case 'r':
		case 'R':
			printf("\nRemainder is %d.",x%y);
			break;

		default:
			printf("\nInvalid");
			break;

	}
	getch();
};

