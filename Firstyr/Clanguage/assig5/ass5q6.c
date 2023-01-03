
Write c program to Find G.C.D using recursion.
*/
#include<conio.h>
#include<stdio.h>
int gcd(int a,int b)
{
     while(a!=b)
    {
        if(a>b)
        {
            return gcd(a - b,b);
        }
        else
        {
            return gcd(a,b - a);
        }
    }
    return a;
}
int main()
{
    int num1,num2,res;
    again:
    printf("Enter the 1st Number:");
    scanf("%d",&num1);
    if(num1<0)
    {
        printf("Invalid Number\nPlease Try again.");
        getch();
        system("cls");
        goto again;
    }
    printf("Enter the 2nd Number:");
    scanf("%d",&num2);
    if(num2<0)
    {
        printf("Invalid Number\nPlease Try again.");
        getch();
        system("cls");
        goto again;
    }
    res=gcd(num1,num2);
    printf("The GCD of %d and %d is %d.\n",num1,num2,res);
    return 0;
}
