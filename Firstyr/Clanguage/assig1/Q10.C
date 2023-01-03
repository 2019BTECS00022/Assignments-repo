#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\nEnter a character:");
	scanf("%c",&ch);
	if(ch>'a'&&ch<'g')
	{
		ch-=32;
		printf("\nCharacter:%c",ch);
	}
	else
		printf("\nO");
	getch();
	return;
}