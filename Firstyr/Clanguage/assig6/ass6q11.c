/*Assignment No.6
batch CSE-2
question 11:
Write a program in C to swap elements using call by reference.
*/
#include<stdio.h>
#include<conio.h>
void ref(int *x,int *y);
void main()
{
    int x,y;
    puts("Enter two integers : \n");
    scanf("%d %d",&x,&y);
    printf("Before swaping \nfirst--> %d \nsecond--> %d\n",x,y);
    ref(&x,&y);
    printf("After  swaping\n first--> %d \nsecond--> %d\n",x,y);
}
ref(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}
