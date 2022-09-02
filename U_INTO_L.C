//Input a char WAP that convert upper case letter into lower case letter and lower case letter into upper case latter:
#include<ctype.h>
void main()
{
	char c,a;
	clrscr();
	printf("Enter the charecter:");
	scanf("%c",&c);
	if (c>=97 && c<=122)
	     a=toupper(c);
	else if (c>=65 && c<=90)
	     a=tolower(c);
	else a=c;
		printf("%c is now %c",c,a);
	getch();
}