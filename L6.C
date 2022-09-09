//1,2,5,10,17,26....n number:
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
		a=a+(2*i-1);
	}
	getch();
}