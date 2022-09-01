//Increment Decrement:
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	a=1;
	b=a++;
	printf("\n a=%d \t b=%d",a,b);
	a=1;
	b=a++ + ++a;
	printf("\n a=%d \t b=%d",a,b);
	a=1;
	b=a++ + ++a + a++;
	printf("\n a=%d \t b=%d",a,b);
	a=1;
	b=a++ + ++a + a++ + ++a;
	printf("\n a=%d \t b=%d",a,b);
	a=1;
	b=a-- + ++a + a-- + ++a;
	printf("\n a=%d \t b=%d",a,b);
	getch();
}


