/*Assignment No.6
batch CSE-2
question 17:
Write a program in C to print the elements of an array in reverse order
*/
#include<stdio.h>
#include<stdlib.h>
void rec(int *arr,int n);
int main()
{
    int n=0,i=0,ans=0;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  elements : ");
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    rec(arr,n);
    return 0;
}
rec(int *arr,int n)
{
    int r=0;
    printf("\nReverse array is : ");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(arr+i));
    }
}

