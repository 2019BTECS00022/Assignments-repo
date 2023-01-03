#include<stdio.h>
#include<conio.h>
void main()
{
	int x,tmp=0,ip1,ip2,dig;
	clrscr();
	printf("\nEnter a no:");
	scanf("%d",&x);
	if(x<0)
		printf("\nInvalid input:%d",x);
	else
	{
		printf("\nLast digit is:%d",x%10);
		ip1=x%10;
		while(x>0)
		{
			dig=x%10;
			tmp*=10+dig;
			x/=10;
		}
		printf("\nfirst digit is:%d",tmp%10);
		ip2=tmp%10;
		if(ip1%ip2==0)
			printf("\nfirst and Last digits are multiples");
		else
			printf("\nFirst and Last digit are not multiples");
	{
	getch();
	return;
}