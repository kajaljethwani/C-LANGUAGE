//Type casting:
#include<stdio.h>
#include<conio.h>
void main()
{
	double a;
	int m1,m2,m3,b;
	clrscr();
	printf("Enter marks of 3 subjects");
	scanf("%d %d %d", &m1,&m2,&m3);
	a=(double)(m1+m2+m3)/3;    //Explicit type casting
	printf("\n Average=%.2lf",a);
	b=a;
	printf("\n b=%d",b);
	printf("\n %d", (int)a%2);
	getch();
}