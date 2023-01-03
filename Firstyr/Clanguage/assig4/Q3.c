/*Assignment No.4
batch CSE-2
question 3:
3. Write a C program to search element in an array by binary search method
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{

    int n,i,mid,r,l=0,tmp,j,fv;
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
    printf("Enter find value:");
    scanf("%d",&fv);
    l=0;
    r=n-1;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(fv==a[mid])
        {
           printf("Found");
           return 0;
        }
        if(fv<a[mid])
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }

    }
    printf("Not Found");
    return 0;

}
