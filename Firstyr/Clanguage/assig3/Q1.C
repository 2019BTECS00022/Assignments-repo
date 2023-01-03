#include<stdio.h>
#include<conio.h>
 void main()
 {
 long int y,c,d;
 clrscr();
 printf("Enter year:");
 scanf("%ld",&y);
 c=y-1900;
 d=c/4;
 c=c-d;
 c=c*365;
 d=d*366;
 c=c+d;
 c=c%7;
  switch (c)
  {
  case 1:printf("Monday");
  break;
  case 2:printf("Tuesday");
  break;
  case 3:printf("Wednesday");
  break;
  case 4:printf("Thursday");
  break;
  case 5:printf("Friday");
  break;
  case 6:printf("Saturday");
  break;
  case 0:printf("Sunday");
  }
  getch();
  }




