//Input marks of three subjects.WAP that print result (PASS/FAIL/ATKT):
#include<stdio.h>
#include<conio.h>
void main()
{
	float m1,m2,m3;
	clrscr();
	printf("Enter marks of three subjects:");
	scanf("%f %f %f",&m1,&m2,&m3);
	if (m1>=40 && m2>=40 && m3>=40){
		printf("PASS",m1,m2,m3); }
	else if ((m1<40 && m2>=40 && m3>=40)
		||(m1>=40 && m2<40 && m3>=40)
		||(m1>=40 && m2>=40 && m3<40))

		printf("ATKT",m1,m2,m3);

	else
		printf("FAIL",m1,m2,m3);
	getch();
}