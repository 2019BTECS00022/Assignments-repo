/*Assignment No.6
batch CSE-2
question 13:
Write a program in C to count the number of vowels and consonants in a string using a pointer.
*/
#include<stdio.h>
#include<conio.h>
int count(char* s);
void main()
{
    char str[100];
    puts("Enter string : \n");
    gets(str);
    printf("Vowels in  string is  %d\n",count(str));
    printf("Consonant in  string is  %d",strlen(str)-count(str));
}
int count(char *s){
int l=0;
while(*s!='\0'){
    if(*s=='a' ||*s=='e' ||*s=='i'||*s=='o'||*s=='u'||*s=='A'||*s=='E'||*s=='I'||*s=='O'||*s=='U')
    l++;
    s++;
}
return l;
}
