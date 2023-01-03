/*Assignment No.6
batch CSE-2
question 14:
Write a program in C to sort an array using Pointer.
*/
#include <stdio.h>
#include <stdlib.h>
void sortfn(int n,int *p);
int main()
{
    int* ptr;
    int n, i;

    printf("Enter number of elements: \n");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("Enter  elements of the array: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d",&ptr[i]);
    }
    int temp=0;
    printf("The elements of the array are: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d  ", ptr[i]);
    }
    sortfn(n,ptr);
    printf("\nThe elements of the array after sorting are: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d  ", ptr[i]);
    }
    return 0;
}

void sortfn(int n,int *p)
{
    int i=0,j=0,t=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(*(p+i)<*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
