#include<stdio.h>
#include<conio.h>
//C program to find the number of lines in a text file
int main()
{
	FILE *filep;
	int count_lines=0;
	char filechar[40],chr;
	clrscr();
	printf("\nEnter file name:");
	scanf("%s",filechar);
	filep=fopen(filechar,"r");
	//extract character from file and store in chr
	chr=getc(filep);
	while(chr !=EOF)
	{
		//count wherever new line is encountered
		if(chr=='n')
		{
			count_lines=count_lines+1;
		}
		//take next character from file.
		chr=getc(filep);
	}
	fclose(filep);//close file.
	printf("\nThere are %d lines in %s in a file",count_lines,filechar);
	getch();
	return 0;
}