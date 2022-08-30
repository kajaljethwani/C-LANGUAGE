//Volume of Pyramid:
#include<stdio.h>
#include<conio.h>
void main()
{
	double l,w,h,vop;
	clrscr();
	printf("Enter value of l,w,h");
	scanf("%lf %lf %lf",&l,&w,&h);
	vop=l*w*h/3;
	printf("Volume of Pyramid is %lf",vop);
	getch();
}

