/*Assignment No.6
batch CSE-2
question 4:
Write a program in C to add two numbers using pointers.
*/
#include<stdio.h>
int main()
{
    int num1,num2,sum,*n1,*n2,*s;
    s=&sum;
    n1=&num1;
    n2=&num2;
    printf("Enter the two number:\n");
    scanf("%d%d",&num1,n2);
    sum=(*n1)+(num2);
    printf("Sum of %d and %d is %d",*n1,*n2,*s);
    return 0;
}
