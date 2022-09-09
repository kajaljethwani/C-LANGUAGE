//1,2,4,8,16,32....n numbers:
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
		a=2*a;
	}
	getch();
}