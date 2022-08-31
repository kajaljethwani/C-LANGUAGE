//PRE_PROCESSER
#include<stdio.h>
#include<conio.h>
//Simple macro
#define PI 3.14
//Argumented macro
#define s(r)r*r
//Nested macro
#define c(r)s(r)*r
void main()
{
	float x,area,volume;
	clrscr();
	printf("Enter redius");
	scanf("%f",&x);
	area=PI*s(x);
	volume=4*PI*c(x)/3;
	printf("\n Area of circle=%f",area);
	printf("\n Volume of sphere=%f",volume);
	getch();
}