/*Assignment No.6
batch CSE-2
question 16:
Write a program in C to compute the sum of all elements in an array using pointers.
*/
#include<stdio.h>
#include<stdlib.h>
int rec(int *arr,int n);
int main()
{
    int n=0,i=0,ans=0;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter  elements : ");
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    ans=rec(arr,n);
    printf("\nSum is : %d",ans);
    return 0;
}
    int rec(int *arr,int n)
    {
        int r=0;
        for(int i=0;i<n;i++){
            r+=*(arr+i);
    }
    return r;
}
