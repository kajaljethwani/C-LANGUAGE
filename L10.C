//1,2,4,8,15,26,42....n numbers:
#include<stdio.h>
#include<conio.h>

void main()
{
	long int i,n,a=1,b=1;
	clrscr();
	printf("Enter n ");
	scanf("%ld",&n);
	for(i=1; i<=n; i++)
	{
		printf("%ld \t",a);
		a=a+b;
		b=b+i;
	}
	getch();
}