#include<stdio.h>
#include<conio.h>
void main()
{
	int ten,fifty,hundred,cash;
	clrscr();
	printf("\nEnter ammount in multiple of hundred:\n");
	scanf("%d",&cash);
	hundred=cash/100;
	fifty=cash/50;
	ten=cash/10;
	printf("Cashier will be given:%dhundred rs Notes\n
	        or\nCashier will be given:%dfifty rs Notes\n
                or\n Cashier will be given:%dten rs Notes\n",hundred,fifty,ten);
	getch();
	return;
}