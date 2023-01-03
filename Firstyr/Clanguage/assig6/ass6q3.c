/*Assignment No.6
batch CSE-2
question 3:
Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
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
    printf("pointer address  is %d  \n",&p);
    printf("pointer store  address  is %d  \n",p);
    printf("pointer points to  %d",*p);
    return 0;
}



