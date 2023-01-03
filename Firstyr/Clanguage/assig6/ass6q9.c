/*Assignment No.6
batch CSE-2
question 9:
Write a program in C to find the largest element using Dynamic Memory Allocation.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
    printf("Enter number of elements: \n");
    scanf("%d",&n);
    // Dynamically allocate memory using malloc()
    //ptr = (cast-type*) malloc(byte-size)
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
        printf("%d, ", ptr[i]);
        if(temp<ptr[i])temp=ptr[i];
    }
    printf("\nBiggest element is %d",temp) ;
    return 0;
}
