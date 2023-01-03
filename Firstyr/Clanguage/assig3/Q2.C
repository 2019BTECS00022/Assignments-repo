#include <stdio.h>
#include <conio.h>
void main()
{

	char c;
	int n;
	clrscr();
	printf("enter character : ");
	scanf("%c", &c);
	n=c;
	//printf("ascii value = %d",n);
	if(n>64 && n<91)
		printf("\n Entered character is capital letter");
	else if(n>96 && n<123)
		printf("\n Entered character is small letter");
	else if(n>47 && n<58)
		printf("\n Entered character is digit");
	else
		printf("\nSpecial symbol");
	getch();
}