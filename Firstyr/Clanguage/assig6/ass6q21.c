/*Assignment No.6
batch CSE-2
question 21:
Write a program in C to print all the alphabets using a pointer.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    int *p;
    p=&i;
    for(i=65;i<91;i++)
    {
        printf("%c ",*p);
    }
    p=&i;
    for(i=97;i<123;i++)
    {
        printf("%c ",*p);
    }
    return 0;
}
