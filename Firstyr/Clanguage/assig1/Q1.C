#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,y,sum;
	clrscr();
	printf("\n enter nos:");
	scanf("%d%d",&x,&y);
	if(x=y)
		sum=6*x;
	else
		sum=x+y;
	printf("\n sum:%d",sum);
	getch();
	return;
}