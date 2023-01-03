#include<stdio.h>
#include<conio.h>
void main()
{
	int x[4][3];
	int i,j;
	clrscr ();
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n x[%d][%d]:",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	clrscr ();
	printf("\n Matrix \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("%5d",x[i][j]);
		printf("\n");
	}
		printf("\n Transpose\n");
		for(i=0;i<4;i++)
		{
			for(j=0;j<3;j++)
				printf("%4d",x[i][j]);
			printf("\n");
		}
	getch ();
}