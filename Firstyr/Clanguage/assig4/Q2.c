/*Assignment No.4
batch CSE-2
question 2:
2. Write a C program to search element in an array by linear search method.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,fv,cnt=0;
    again:
    printf("Enter the size of the array:");
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
    printf("Enter find value:");
    scanf("%d",&fv);
    for(i=0;i<n;i++)
    {
        if(a[i]==fv)
            cnt++;

    }
    printf("Given number %d has found %d times in the Inputed array",fv,cnt);

    return 0;

}
