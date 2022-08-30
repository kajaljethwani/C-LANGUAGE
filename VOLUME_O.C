//Volume of Cylinder:
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	double r,h,voc;
	clrscr();
	printf("Enter value of r,h",voc);
	scanf("%lf %lf",&r,&h);
	voc =PI*r*r*h;
	printf("Volume of a Cylinder is %lf",voc);
	getch();
}