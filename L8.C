//1,2,6,24,120....n number:
#include<stdio.h>
#include<conio.h>

void main()
{
	long int i,n,a=1;
	clrscr();
	printf("Enter n ");
	scanf("%ld",&n);
	for(i=1; i<=n; i++)
	{
		printf("%ld \t",a);
		a=a*(i+1);
	}
	getch();
}