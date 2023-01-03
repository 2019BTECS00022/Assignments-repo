
Write C program to explain function types With example.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n\n*********** TYPES OF FUNCTIONS************\n\n\n");
    getch();
    printf(" There are 4 types of functions\n 1.these function takes no any argument and doesn't return value to calling function\n 2.these function takes argument but do not return any value to calling program\n 3.these function doesn't takes any argument but returns some value to calling program\n 4.these functions takes arguments and returns some value to calling program\n");
    getch();
    printf("**********************************\n\n");
    printf(" Examples : sum of numbers :-\n\n 1.these function takes no any argument and doesn't return value to calling function:-\n void sum1()///print a number\n {\n\tint no1,no2;\n\tprintf(\" Enter two numbers\");\n\tscanf(\"%%d%%d\",&no1,&no2);\n\tprintf(\" Sum is %%d\",no1+no2);\n }");
    getch();
    printf("\n\n**********************************\n\n");
    printf(" 2.these function takes argument but do not return any value to calling program:-\n int sum2()\n {\n\tint no1,no2;\n\tprintf(\" Enter two numbers\");\n\tscanf(\"%%d%%d\",&no1,&no2);\n\treturn (no1+no2);\n }");
    getch();
    printf("\n\n**********************************\n\n");
    printf(" 3.these function doesn't takes any argument but returns some value to calling program\n void sum3(int a,int b)\n {\n\tprintf(\"Sum is %%d\",a+b);\n }");
    getch();
    printf("\n\n**********************************\n\n");
    printf(" 4.these functions takes arguments and returns some value to calling program\n int sum4(int a,int b)\n {\n\treturn a+b;\n }");

}

