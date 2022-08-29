#include <stdio.h>
#include <conio.h>
void main()
{
	short int a=-23;
	unsigned short int b=23;
	clrscr();
	printf("\n short int a=%d",a);
	printf("\n unsigned short int b=%d",b);
	scanf("\n %d %d", &a,&b);
	printf("%d",a,b);

	getch();
}

