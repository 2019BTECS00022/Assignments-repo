#include<stdio.h>
#include<conio.h>
void main()
{
	float w,x,y,z,min,max;
	clrscr();
	printf("\n enter 4 numbers:");
	scanf("%f%f%f%f",&w,&x,&y,&z);
	if(w>x&&w>y&&w>z)
	max=w;
	else
	{
		if(x>w&&x>y&&x>z)
		max=x;
		else
		{
			if(y>w&&y>x&&y>z)
			max=y;
			else
			max=z;
		}

	}
	if(w<x&&w<y&&w<z)
	min=w;
	else
	{
		if(x<w&&x<y&&x<z)
		min=x;
		else
		{
			if(y<w&&y<x&&y<z)
			min=y;
			else
			min=z;
		}
	}
	printf("\nDifferencs:%4f",max,min);
	getch();
	return;
}















