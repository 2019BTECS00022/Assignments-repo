#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,d,r;
	printf("\nenter nos:");
	scanf("%d %d",&a,&b);
	d=a/b;
	printf("\nQuotient:%d",d);
	r=a%b;
	printf("\nremainder :%d",r);
	getch();
	return;

}