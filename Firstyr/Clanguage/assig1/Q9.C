#include<stdio.h>
#include<conio.h>
void main()
{
	char l[10];
	int i=0,cnt=0;
	clrscr();
	printf("\nEnter a line:");
	for(i=0;i<10;i++)
	{
		if(l[i]=='a'||l[i]=='e'||l[i]=='i'||l[i]=='o'||l[i]=='u')
		cnt++;
	}
	for(i=0;i<10;i++)
	printf("%c",l[i]);
	printf("\nNo of vowels are:%d",cnt);
	getch();
	return;
}