
Write C Program Find the sum of natural numbers using recursion.
*/
#include<conio.h>
#include<stdio.h>
int sumnaturalnumbers(int a,int b)
{
    if(a==b)
        return a;
    else
        return a+ sumnaturalnumbers(a+1,b);


}
int main()
{
    int sum,num,start=1;
    again:
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num<1)
    {
        printf("Invalid Number\nPlease Try again.");
        getch();
        system("cls");
        goto again;
    }
    sum=sumnaturalnumbers(start,num);
    printf("Sum of 1st %d natural numbers is %d.",num,sum);
    return 0;
}
