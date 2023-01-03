#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	long int no;
	int sum=0,tmp;
	clrscr();
	printf("\nEnter the number:");
	scanf("%ld",&no);
	while(no!=0)
	{
		tmp=no%10;
		sum+=tmp;
		no=no/10;
	}
	printf("Sum of its digits is:%d",sum);
	getch();
	return;
}