//Convert into year,month,days
#include<stdio.h>
#include<conio.h>
void main()
{
	int totaldays,year,month,days;
	clrscr();
	printf("Enter totaldays");
	scanf("%d",&totaldays);
	year=totaldays/360;
        totaldays=totaldays%360;
	month=totaldays/30;
	days=totaldays%30;
	printf("\n total year is %d",year);
	printf("\n total month is %d",month);
	printf("\n totaldays is %d",days);
	getch();
}
