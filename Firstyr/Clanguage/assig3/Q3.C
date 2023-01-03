#include<stdio.h>
#include<conio.h>
 void main()
 {
 int c,f,g;
 clrscr();
 printf("\nEnter class obtained(1/2/3):");
 scanf("%d",&c);
 printf("\nEnter no. of subjects failed:");
 scanf("%d",&f);
 switch(c)
 {
 case 1:
   switch(f)
   {
   case 1:
   case 2:
   case 3:
	g=5;
	break;
   default:
	g=0;
	break;
   }
   break;
 case 2:
   switch(f)
   {
   case 1:
   case 2:
	g=4;
	break;
   default:
	g=0;
	break;
   }
   break;
 case 3:
   switch(f)
   {
   case 1:
	g=5;
	break;
   default:
	g=0;
	break;
   }
   default:
	break;
   }
   printf("\n %d Grace marks per failed subject",g);
   getch();
   }