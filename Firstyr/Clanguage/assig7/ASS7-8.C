#include<stdio.h>
#include<conio.h>
#include<fcntl.h>
#include<stdlib.h>
//C program to capilize first letter of every word in a file
int capitalizefile(FILE *);

void main(int argc,char *argv[])
{
	FILE *fp1;
	char fp[10];
	int p;
	clrscr();
	fp1=fopen(argv[1],"r+");
	if(fp1==NULL)
	{
		printf("cannot open the file");
		exit(0);
	}
	p=capitalizefile(fp1);
	if(p==1)
	{
		printf("Success");
	}
	else
	{
		printf("Failure");
	}
	fclose(fp1);
	getch();
}

//Capilizes first letter of every word.
int to_initcap_file(FILE *fp)
{
	char c;
	clrscr();
	c=fgetc(fp);
	if(c>='a'&&c<='z')
	{
		fseek(fp,-1L,1);
		fputc(c-32,fp);
	}
	while(c!=EOF)
	{
		if(c==' '||c=='\n')
		{
			c=fgetc(fp);
			if(c>='a'&&c<='z')
			{
				fseek(fp,-1L,1);
				fputc(c-32,fp);
			}
		}
		else
		{
			c=fgetc(fp);
		}
	}
	getch();
	return 1;
}