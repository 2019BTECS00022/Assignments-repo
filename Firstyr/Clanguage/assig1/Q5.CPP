#include<stdio.h>
#include<conio.h>
void main()
{
	int flag=0,d,m,y;
	clrscr();
	printf("\nEnter Date Month Year :\n");
	printf("Date:");
	scanf("%d",&d);
	printf("Month:");
	scanf("%d",&m);
	printf("Year:");
	scanf("%d",&y);
	if(d<1||d>31||m<1||m>12||y<0)
	{
		if(d<1||d>31)
		printf("\nInvalid Inputed Date");
		if(m<1||m>12)
		printf("\nInvalid Inputed Month");
		if(y<0)
		printf("\nInvalid Inputed Year");
	}
	if((y%4==0&&y%10!=0)||y%4==0)
	flag=1;
	if(flag==0)
	{
		if(d>28)
		{
			printf("Invalid Date");
		}
	}
	d++;
	switch(m)
	{	case 2:
		if(flag==0)
		{
			if(d==29)
			{
				d=1;
				m=3;
			}
		}
		else
		{
		if(d==30)
		{
			d=1;
			m=3;
		}
	}
	break;
	case 4:
	case 6:
	case 9:
	case 11:
	if(d==31)
	{
		d=1;
		m++;
	}
	break;
	case 12:
	if(d==32)
	{
		d=1;
		m=1;
		y++;
	}
	break;
	default:
	if(d==32)
	{
		d=1;
		m++;
	}
	}
	printf("Next date is%d:%d:%d",d,m,y);
	getch();
	return;
}