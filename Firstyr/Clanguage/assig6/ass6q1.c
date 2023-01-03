*/assingment 7
batch cs-2
question no-1
Write a program in C to show the basic declaration of pointer.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int *p,q=5;
    printf("Basic decleraton\n");
    p=&q;
    printf("pointer store  address  is %d  \n",p);
    printf("pointer is %d",*p);
    return 0;
}

