//Volume of Cone:
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	long double r,h,voc;
	clrscr();
	printf("Enter value of r,h");
	scanf("%Lf %Lf",&r,&h);
	voc=PI*r*r*h/3;
	printf("Volume of Cone is %Lf",voc);
	getch();
}
