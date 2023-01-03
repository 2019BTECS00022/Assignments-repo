/*Assignment No.6
batch CSE-2
question 5:
Write a program in C to add numbers using call by reference.
*/
#include<stdio.h>
int addTwoNumbers(int *n1,int *n2)
{
   int sum;
   sum=(*n1)+(*n2);
   return sum;
}
int main()
{
    int num1,num2,sum;
    printf("\n\n Pointer : Add two numbers using call by reference:\n");
    printf(" Input the first number:");
    scanf("%d",&num1);
    printf(" Input the second  number:");
    scanf("%d",&num2);
    sum=addTwoNumbers(&num1,&num2);
    printf(" The sum of %d and %d  is %d\n",num1,num2,sum);
    return 0;
}

