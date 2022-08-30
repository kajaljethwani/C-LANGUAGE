//Area of circle:
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	float r,aoc;
	clrscr();
	printf("Enter value of r");
	scanf("%f",&r);
	aoc=PI*r*r;
	printf("Area of circle=%f",aoc);
	getch();
}