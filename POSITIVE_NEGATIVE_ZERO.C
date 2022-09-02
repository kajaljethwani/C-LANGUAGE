//conditonal operators
//input an int. write a program that check whether the number is +ve,-ve or zero.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr ();
	printf("Enter a No.");
	scanf("%d",&a);
	a=0?printf("%d is zero",a"):a>0?printf("%d is Positive",a):a<0?printf("%d is Negative",a);
	getch();
}
