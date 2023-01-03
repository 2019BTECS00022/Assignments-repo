
Write C Program to Check prime and Armstrong number by making functions.
*/
#include<stdio.h>
#include<conio.h>

void isPA(int a)
{
    int i,j,flagp=0,flaga=0,k;
    if(a>2)
    {
        j=sqrt(a);
        for(i=2;i<=j;i++)
        {
            if(a%i==0)
                break;
        }
        if(i>j)
            flagp=1;
    }
    else
    {
        if(a==2)
            flagp=1;
    }
    j=a;
    i=0;
    while(j>0)
    {
        k=(j%10);
        i+=(k*k*k);
        j/=10;
    }
    if(i==a)
        flaga=1;
    if(flaga==1&&flagp==1)
        printf("Given number is Prime as well as Armstrong number.");
    else if(flaga==1)
        printf("Given number is a Armstrong number.");
    else if(flagp==1)
        printf("Given number is a Prime number.");
    else
        printf("given number is non-prime and non-armstrong number.");

}
int main()
{
    int res,num;
    again:
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Invalid Number\nPlease Try again.");
        getch();
        system("cls");
        goto again;
    }
    isPA(num);
    return 0;



}
