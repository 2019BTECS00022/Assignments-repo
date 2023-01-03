/*Assignment No.6
batch CSE-2
question 22:
Write a program in C to print a string in reverse using a pointer.
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void  main()
{
    char *p;
    char s[100];
    printf("Enter a string : \n");
    gets(s);
    int n=strlen(s);
    int i=0;
    p=&i;
    for( i=n-1;i>=0;i--)
    {
        printf("%c",s[*p]);
    }
}
