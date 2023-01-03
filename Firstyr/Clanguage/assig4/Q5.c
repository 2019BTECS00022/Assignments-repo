/*Assignment No.4
batch CSE-2
question 5:
5. Write a C program that takes 2D arrays as input from user substrate them and find the result.
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,a[2][2],b[2][2],j,k,m;
    printf("****Two by two matrix subtractor****\n");
    printf("(Note:Subtraction is taking place in the format A-B)\n");
    printf("Enter the numbers for matrix A(Minuend):\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("A[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    printf("Enter the numbers for matrix B(Subtrahend):\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("B[%d][%d]:",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Press the Any key to proceed:");
    getch();
    system("cls");
    printf("****Two by two matrix subtractor****\n");
    printf("Result:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            switch(j)
            {
                case 0:
                    printf("[");
                    for(k=0;k<2;k++)
                    {
                        printf("%5d",a[i][k]);
                        if(k==0)
                        {
                            printf(" ");
                        }

                    }
                    printf("]");
                    if(i==1)
                    {
                        printf(" ");
                    }
                    break;
                case 1:
                    if(i==0&&k==2)
                    {
                        printf("_");
                    }
                    printf("[");
                    for(k=0;k<2;k++)
                    {
                        printf("%5d",b[i][k]);
                        if(k==0)
                        {
                            printf(" ");
                        }

                    }
                    printf("]");
                    if(i==1)
                    {
                        printf(" ");
                    }
                    break;
                case 2:
                    if(i==0&&k==2)
                    {
                        printf("=");
                    }

                    printf("[");
                    for(k=0;k<2;k++)
                    {
                        printf("%5d",a[i][k]-b[i][k]);
                        if(k==0)
                        {
                            printf(" ");
                        }

                    }
                    printf("]");
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
