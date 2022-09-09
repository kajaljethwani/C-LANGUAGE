//1 to 10 and 10 to 1:
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	for(i=1; i<=10; i++)
	{
		printf("%d\t",i);
	}
	for(i=10; i>=1; i--)
	{
		printf("%d\t",i);
	}
	getch();
}