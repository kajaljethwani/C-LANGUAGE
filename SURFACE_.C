//Surface of a sphere:
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	double r,sos;
	clrscr();
	printf("Enter value of r");
	scanf("%lf",&r);
	sos=4*PI*r*r;
	printf("Surface area of a sphere is %lf",sos);
	getch();
}