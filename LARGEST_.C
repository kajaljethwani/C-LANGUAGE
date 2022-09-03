//Input 3 numbers.WAP that print largest no:
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter three numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
		printf("\n %d is Largest",a);
	else if (b>a && b>c)
		printf("\n %d is Largest",b);
	else
		printf("\n %d is Largest",c);
	getch();
}