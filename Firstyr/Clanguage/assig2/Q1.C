#include<stdio.h>
#include<conio.h>
void main()
{
	int bs,gs,ds,hr;
	clrscr();
	printf("\nEnter basic salary:");
	scanf("%d",&bs);
	ds=40*bs/100;
	hr=20*bs/100;
	gs=ds+bs+hr;
	printf("Gross salary is:%d",gs);
	getch();
}