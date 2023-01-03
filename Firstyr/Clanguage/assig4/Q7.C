#include<stdio.h>
#include<conio.h>
#include<maths.h>
int main()
{
	int a[2][2],i,j;
	long determinant;
	clrscr();
	printf("Enter the 4 elements of matrix:");
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	{
	printf("\nThe matrix is\n");
	for(i=0;i<2;i++)
		printf("\n");
	for(j=0;j<2;j++)
		printf("%d\t",a[i][j]);
	}
	for(i=0;i<2;i++)
		determinant=a[0][0]*a[1][1]-a[1][0]*a[0][1];
	printf("\nInverse of matrix is :\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d-%d=%d",a[0][0]*a[1][1],a[1][0]*a[0][1],determinant);
		printf("\n");
	}
	return 0;
	getch();
}