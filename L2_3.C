//Odd Even......n numbers:
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,b=1,c=2;
	clrscr();
	printf("Enter n:");
	scanf("%d",&n);
	printf("\nOdd numbers are:\n");
	for(i=1; i<=n; i++)
	{
		printf("%d \t",b);
		b=b+2;
	}
	printf("\nEven numbers are:\n");
	for(i=1; i<=n; i++)
	{
		printf("%d \t",c);
		c=c+2;
	}
	getch();
}