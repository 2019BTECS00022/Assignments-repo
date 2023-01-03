
Write C Program Check whether a number can be expressed as the sum of two prime numbers.
*/
#include<conio.h>
#include<stdio.h>

int checkprime(int n)
{
    int sq,i;
    if(n==2)
        return 1;
    else if(n>2)
    {
        sq=sqrt(n);
        for(i=2;i<=sq;i++)
        {
            if(n%i==0)
                break;
        }
        if(i>sq)
        {
            return 1;
        }
        else
            return 0;
    }
    else
        return 0;
}
void issumprime(int a)
{
    int res,i,sq;
    if(a%2==1)
    {
        if(a==1)
        {
            printf("%d cannot be expressed as the sum of two prime numbers",a);
            return;
        }
        res=a-2;
        res=checkprime(res);
        if(res==1)
        {
            printf("%d can be expressed as the sum of %d and %d", a, 2, a - 2);
            return;
        }
        else
        {
            printf("%d cannot be expressed as the sum of two prime numbers",a);
            return;
        }
    }
    for(i=2;i<=a/2;i++)
    {
        if(checkprime(i)==1)
        {
            if( checkprime(a-i)==1)
            {
                printf("%d can be expressed as the sum of %d and %d", a, i, a - i);
                return;
            }
        }
    }
    printf("%d cannot be expressed as the sum of two prime numbers",a);
    return;
}
int main()
{
    int num;
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
    issumprime(num);
    return 0;
}
