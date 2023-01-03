#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int p,q,r,s;
	float dis;
	clrscr();
	printf("\nEnter 4 nos:");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	dis=sqrt((p-r)*(p-r)+(q-s)*(q-s));
	printf("\nDistance:%f",dis);
	getch();
	return;
}