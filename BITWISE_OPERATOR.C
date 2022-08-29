//Bitwise operators:

#include<stdio.h>
#include<conio.h>
void main ()
{
	int a=22, b=13;
	clrscr();
	printf("Bitwise AND=%d", a&b);
	printf("\n Bitwise OR=%d", a&b);
	printf("\n Bitwise XOR=%d", a&b);
	printf("\n shift right=%d", a>>b);
	printf("\n shift left=%d", a<<b);
	printf("\n 1\'s Complement=%u",~a);
	getch();
}
