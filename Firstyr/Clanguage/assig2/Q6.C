#include<stdio.h>
#include<conio.h>
void main()
{
	long
	tot,totmen,totwomen,literatemen,literatewomen,literacy,illiteratemen,illiteratewomen;
	clrscr();
	tot=80000;
	totmen=80000*52/100;
	totwomen=tot-totmen;
	literatemen=tot*35/100;
	literacy=tot*48/100;
	literatewomen=literacy-literatemen;
	illiteratemen=totmen-literatemen;
	illiteratewomen=totwomen-literatewomen;
	printf("tot population=%ld\n",tot);
	printf("tot men=%ld\n",totmen);
	printf("tot women=%ld\n",totwomen);
	printf("tot literate men=%ld\n",literatemen);
	printf("tot literate women=%ld\n",literatewomen);
	printf("tot illiterate men=%ld\n",illiteratemen);
	printf("tot illiterate women=%ld\n",illiteratewomen);
	getch();
	return;
}