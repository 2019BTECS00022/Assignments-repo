#include<stdio.h>
#include<conio.h>
 void main()
 {
 float t;
 clrscr();
 printf("\nTime taken by the worker(hh.mm):");
 scanf("%f",&t);
 if(t>=2.00 && t<=3.00)
 printf("\nThe worker is highly efficient");
 else if(t>3.00 && t<=4.00)
 printf("\nThe worker has to improve speed");
 else if(t>4.00 && t<=5.00)
 printf("\nThe training is given to worker");
 else
 printf("\nThe worker has to leave company");
 getch();
 }