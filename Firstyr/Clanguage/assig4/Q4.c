/*Assignment No.4
batch CSE-2
question 4:
4. Write a C program to sort element of an array by bubble sort method.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

    int n,i,tmp,j;
    again:
    printf("Enter size of array:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invalid Input");
        getch();
        system("cls");
        goto again;
    }
    int a[n];
    printf("Enter the Numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    system("cls");
    printf("Inputed numbers:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;

            }
        }
    }
    printf("\nShorted numbers:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
