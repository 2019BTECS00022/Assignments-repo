#include<stdio.h>
#include<conio.h>
int main()
{
	int m1[3][3],m2[3][3],r[3][3];
	int i,j,k;
	clrscr();
	printf("\nMatrix data:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n m1[i][j]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			r[i][j]+=m1[i][j]*m2[i][j];
			{
				for(k=0;k<3;k++)
				r[i][j]=0;
			}
	}
	printf("\nMatrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d\t",r[i][j]);
		for(j=0;j<3;j++)
			printf("%4d\n",r[i][j]);
	}
	return 0;
	getch();
}