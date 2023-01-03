#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\nEnter The value of a:");
	scanf("%d",&a);
	printf("\nEnter The value of b:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe value of a:%d",a);
	printf("\nThe value of b:%d",b);
	getch();
	return;
}