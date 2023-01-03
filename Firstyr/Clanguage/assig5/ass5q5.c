
Write C Program to Calculate the factorial of a number using recursion
*/
#include<conio.h>
#include<stdio.h>
int fac(int a,int b)
{
    if(a==1||a==0)
        return b;
    else
        return a*fac(a-1,b);

}
int main()
{
    int res=1,num;
    again:
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid Number\nPlease Try again.");
        getch();
        system("cls");
        goto again;
    }
    res=fac(num,res);
    printf("Factorial of %d is %d",num,res);
    return 0;
}
