/*Assignment No.6
batch CSE-2
question 7:
Write a program in C to store n elements in an array and print the elements using pointer.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    again:
    printf("\n\n Enter the array size :");
    scanf("%d",&n);
    if(n<=0)
    {
        printf(" Invalid input");
        getch();
        system("cls");
        goto again;
    }
    int arr[n],*arrpointer,i;
    arrpointer=&arr;
    printf(" Enter the numbers :\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(arrpointer)+i);
        printf(" ");
    }
    system("cls");
    printf("\n\n Data :\n");
    for(i=0;i<n;i++)
        printf("%d\t",*(arrpointer+i));
    return 0;
}
