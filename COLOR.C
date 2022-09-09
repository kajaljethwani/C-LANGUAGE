//WAP that accept color code and display color name:
#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("\n color code \n R-Red \n G-Green \n B-Blue");
	printf("\n Enter color code:");
	scanf("%c",&c);
	switch (c)
	{
		case 'r':
		case 'R':
			printf("\n Red");
			break;
		case 'g':
		case 'G':
			printf("\n Green");
			break;
		case 'b':
		case 'B':
			printf("\n Blue");
			break;
		default:
			printf("\n invalid color code");
			break;
	}
		getch();
}