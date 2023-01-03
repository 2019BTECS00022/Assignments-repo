#include<stdio.h>
#include<conio.h>
 void main()
 {
 int d,f;
 clrscr();
 printf("\nEnter no. of days late for return a book:");
 scanf("%d",&d);
  if(d>=1 && d<=5)
  printf("\nThe fine is 50 paise");
  else if(5<d && d<11)
  printf("\nThe fine is 1 rupee");
  else if(10<d && d<=30)
  printf("\nThe fine is 5 rupees");
  else
  printf("\nThe membership is cancelled");
  getch();
  }