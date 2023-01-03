/*Assignment No.4
batch CSE-2
question 1:
1. Write a C program to calculate the difference of the elements stored in an array.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i,opt,j,no;
    char ch;
    again:
    printf("Enter the Number of elements in the array:");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Invalid Input");
        getch();
        system("cls");
        goto again;

    }
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the array element No.%d:",i);
        scanf("%d",&a[i]);
    }
    while(1)
    {
        printf("Menu:\n1.Difference All Elements\n2.Difference of Selected Element from all other Elements\n3.Difference between selected Two elements\n4.Exit\nOption:");
        scanf("%d",&opt);
        if(opt>3||opt<1)
        {
                printf("Program End");
                getch();
                exit(0);

        }
        switch(opt)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("a[%d]-a[%d]=%d-%d=%d\n",i,j,a[i],a[j],a[i]-a[j]);
                    }
                }
                break;
            case 2:
                again1:
                printf("MiniMenu:\n1.Selecting Element which is Minuend \n2.Selecting Element which is Subtrahend\nOption:");
                scanf("%d",&opt);
                if(opt>2||opt<1)
                {
                    printf("Invalid Input\nTo write input again type any Digit\nTo Exit the Program type any Character");
                    ch=getch();
                    if(ch>='0'&&ch<='9')
                        goto again1;
                    else
                    {
                        printf("Program End");
                        getch();
                        exit(0);
                    }
                }
                switch(opt)
                {
                    case 1:
                        again2:
                        printf("Enter the Number of Array Element which as a Minuend:");
                        scanf("%d",&j);
                        if(j>=n||j<0)
                        {
                            printf("invalid Input");
                            goto again2;
                        }
                        for(i=0;i<n;i++)
                            printf("a[%d]-a[%d]=%d-%d=%d\n",j,i,a[j],a[i],a[j]-a[i]);
                        break;
                    case 2:
                        again3:
                        printf("Enter the Number of Array Element which as a Subtrahend:");
                        scanf("%d",&j);
                        if(j>=n||j<0)
                        {
                            printf("invalid Input\n");
                            goto again3;
                        }
                        for(i=0;i<n;i++)
                            printf("a[%d]-a[%d]=%d-%d=%d\n",i,j,a[i],a[j],a[i]-a[j]);
                        break;
                }
                break;
            case 3:
                again4:
                printf("Enter the element number as Minuend:");
                scanf("%d",&i);
                if(i>=n||i<0)
                {
                    printf("invalid Input");
                    goto again4;
                }
                again5:
                printf("Enter the element number as Subtrahend:");
                scanf("%d",&j);
                if(j>=n||j<0)
                {
                    printf("invalid Input");
                    goto again5;
                }
                printf("a[%d]-a[%d]=%d-%d=%d",i,j,a[i],a[j],a[i]-a[j]);
                break;

        }
    }
    return 0;
}
