#include<stdio.h>
#include<conio.h>
//C program Delete a specific line from a text file
int main()
{
	FILE *filep1,*filep2;
	char filename[40];
	char ch;
	int delete_line, tmp=1;
	clrscr();
	printf("Enter file name:");
	scanf("%s",filename);
	//open file in read mode
	filep1=fopen(filename,"r");
	ch=getc(filep1);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=getc(filep1);
	}
	//rewind
	rewind(filep1);
	printf("\nEnter line number of theline to be deleted:");
	scanf("%d",&delete_line);
	//open new file inwrite mode
	filep2=fopen("replica.c","w");
	ch=getc(filep1);
	while(ch!=EOF)
	{
		ch=getc(filep1);
		if(ch=='\n')
			tmp++;
			//except the line to be deleted
			if(tmp!=delete_line)
			{
				//copy all line in file replica.c
				putc(ch,filep2);
			}
	}
	fclose(filep1);
	fclose(filep2);
	remove(filename);
	//rename the file replica.c to original name
	rename("replica.c",filename);
	printf("\nThe contents of file after being modified are as follows:\n");
	filep1=fopen(filename,"r");
	ch=getc(filep1);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=getc(filep1);
	}
	fclose(filep1);
	getch();
	return 0;
}
