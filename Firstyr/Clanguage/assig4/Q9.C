#include<stdio.h>
#include<conio.h>
void main()
{
	int p[3][3],q[3][3],r[3][3];
	int i,j,k;
	printf("\n Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("\n p[%d][%d]",i,j);
		scanf("%d",p[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("\n q[%d][%d]",i,j);
		scanf("%d",q[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(i=0;i<3;i++)
		{
			r[i][j]=0;
			for(k=0;k<3;k++)
			r[i][j]+=(p[i][k]*q[k][j]);
		}
	}
	printf("\n Matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",q[i][j]);
		printf("\t");
		for(j=0;j<3;j++)
			printf("%4d",q[i][j]);
		printf("\t");
		for(j=0;j<3;j++)
			printf("%4d",r[i][j]);
		printf("\n");
	}
	getch();
	return;
}