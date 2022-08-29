//Circumference of a Circle:
#include<stdio.h>
#include<conio.h>
#define PI 3.14

void main()
{
	double r,coc;
	clrscr();
	printf("Enter a value of r");
	scanf("%lf",&r);
	coc=2*PI*r;
	printf("circumference of a circle is %lf",coc);
	getch();
}