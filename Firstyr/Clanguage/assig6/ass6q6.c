/*Assignment No.6
batch CSE-2
question 6:
Write a program in C to find the maximum number between two numbers using a pointer.
*/
#include<stdio.h>
int maxfind(int *n1,int *n2)
{
    if((*n1)==(*n2))
        return 0;
    else if((*n1)>(*n2))
        return 1;
    else
        return 2;
}
int main()
{
    int num1,num2,res;
    printf("\n\n Pointer : find the maximum number between two numbers:\n");
    printf(" Input the first number:");
    scanf("%d",&num1);
    printf(" Input the second  number:");
    scanf("%d",&num2);
    res=maxfind(&num1,&num2);
    if(res==0)
        printf(" Both numbers are equal");
    else if(res==1)
        printf(" The maximum number between %d and %d is %d",num1,num2,num1);
    else
        printf(" The maximum number between %d and %d is %d",num1,num2,num2);
    return 0;
}
