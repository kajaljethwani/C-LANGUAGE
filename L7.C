//0,2,6,12,20....n number:
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,a=0;
	clrscr();
	printf("Enter n ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d \t",a);
		a=a+(2*i);
	}
	getch();
}