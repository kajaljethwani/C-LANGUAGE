 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int a;
	clrscr();
	printf("Enter a No.");
	scanf("%d",&a);
	a%2==0?printf("%d is Even no.",a):printf("%d is Odd No.",a);
	getch();
 }