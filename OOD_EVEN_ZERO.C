//input an int.no write a program that check whether the number is Odd, Even or Zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter a No.");
	scanf("%d",&a);
	a==0?printf("%d is zero",a):a%2==0?printf("%d is Even No.",a):printf("%d is Odd No.",a);
	getch();
}
