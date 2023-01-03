/*Assignment No.6
batch CSE-2
question 2:
Write a program in C to demonstrate how to handle the pointers in the program.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int *p;
    int q=9; // declaration
    printf("Basic decleraton\n");
    p=&q;
    *p=q;
    printf("pointer store  address  is %d  \n",p);
    printf("pointer points to  %d",*p);
    return 0;
}


