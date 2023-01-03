#include<stdio.h>
#include<conio.h>
void main()
{
	float inch,cm;
	clrscr();
	printf("\ntype value in inch:");
	scanf("%d",&inch);
	cm=inch/(2.54);
	printf("\ncm value:%f",cm);
	getch();
	return;
}