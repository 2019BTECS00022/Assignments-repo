/*Assignment No.6
batch CSE-2
question 10:
Write a program in C to Calculate the length of the string using a pointer.
*/
#include<stdio.h>
#include<conio.h>
int count(char* s);
void main()
{
    char str[100];
    puts("Enter string : \n");
    gets(str);
    printf("Length of string is  %d",count(str));
}
int count(char *s)
{
    int l=0;
    while(*s!='\0')
    {
        l++;
        s++;
    }
    return l;
}
