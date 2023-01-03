#include<stdio.h>
#include<conio.h>
//C program to replace a specified line in a text file
int main(void)
{
	FILE *filep1,*filep2;
	char filechar[40];
	char c;
	int delete_line,tmp=1;
	clrscr();
	printf("\nEnter file name:");
	scanf("%s",filechar);
	filep1=fopen(filechar,"r");
	c=getc(filep1);
	//print the contents of file
	while(c!=EOF)
	{
		printf("%c",c);
		c=getc(filep1);
	}
	printf("\nEnter line number to be deleted and replace:");
	scanf("%d",&delete_line);
	//take filep1 to start point
	rewind(filep1);
	//open replica.c in write mode
	filep2=fopen("replica.c","w");
	c=getc(filep1);
	while(c!=EOF)
	{
		if(c=='n')
		{
			tmp++;
		}
		//till the line to be deleted comes,copy the content to other
		if(tmp!=delete_line)
		{
			putc(c,filep2);
		}
		else
		{
			while(c=getc(filep1))
			//read and skip the line ask for new text
			printf("\n Enter new text:");
			//flush the input stream
			fflush(stdin);
			putc('n',filep2);
			//put 'n'in new file
			while((c=getchar())!='n')
				putc(c,filep2);
			//take the data from user and place it in new file
			fputs("n",filep2);
			tmp++;
		}
		//continue this till EOF is encountered
		c=getc(filep1);
	}
	fclose(filep1);
	fclose(filep2);
	remove(filechar);
	rename("replica.c",filechar);
	filep1=fopen(filechar,"r");
	//reads the character of file is encountered
	while(c!=EOF)
	{
		printf("%c",c);
		//all characters are printed
		c=getc(filep1);
	}
	fclose(filep1);
	getch();
	return 0;
}