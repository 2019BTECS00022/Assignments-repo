#include<stdio.h>
#include<conio.h>
//C program to create a file emp.rec and store information
//about a person ,in terms of his name,age and salary.
void main()
{
	FILE *fp;
	char name[20];
	int age;
	float salary;
	clrscr();
	fp=fopen("emp.rec","w");
	if(fp==NULL)
	{
		printf("File does not exists:\n");
		return;
	}
	printf("Enter the name:");
	scanf("%s",name);
	fprintf(fp,"\nName=%s",name);
	printf("\nEnter the age:");
	scanf("%d",&age);
	fprintf(fp,"\nAge=%d",age);
	printf("\nEnter the salary:");
	scanf("%f",&salary);
	fprintf(fp,"\nSalary=%.2f",salary);
	fclose(fp);
	getch();
}