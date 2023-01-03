include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//Cprogram to illustrate how a file stored on the disk is read
void main()
	FILE *fp;
	char filename[15];
	char ch;
	clrscr();
	printf("Enter the filename to be opened:");
	scanf("%s",filename);
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("\nCannot open file");
		exit(0);
	}
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=fgetc(fp);
	}
	fclose(fp);
	getch();
}ÿ