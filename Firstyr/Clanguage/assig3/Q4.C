#include<stdio.h>
#include<conio.h>
 void main()
 {
 int a,p,pa;
 char h,l,g;
 clrscr();
 printf("\nEnter health(e for excellent or p for poor):");
 scanf("%c",&h);
 printf("\nEnter age:");
 scanf("%d",&a);
 printf("\nEnter gender(m for male or f for female):");
 scanf("%c",&g);
 printf("\nEnter address(c for city or v for village):");
 scanf("%c",&l);
 if((h=='e')&&(l=='c')&&(g=='m')&&(a>=25&&a<=35))
 printf("\nPremium is Rs.4 per thousand and his policy cannot exceeds Rs.2 lakhs");
 else if((h=='e')&&(l=='c')&&(g=='f')&&(a>=25&&a<=35))
 printf("\nPremium is Rs.3 per thousand and her policy cannot exceeds Rs.1 lakh");
 else if((h=='p')&&(l=='v')&&(g=='m')&&(a>=25&&a<=35))
 printf("\nPremium is Rs.6 per thouesnd and his policy cannot exceeds Rs.10000");
 else
 printf("\n not insured");
   getch();
   }