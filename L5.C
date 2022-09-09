//1,2,4,7,11...n numbers:
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a=1;
	clrscr();
	printf("Enter n ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d \t",a);
		a=a+i;
	}
	getch();
}

