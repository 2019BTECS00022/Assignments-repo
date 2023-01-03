/*Assignment No.6
batch CSE-2
question 12:
Write a program in C to find the factorial of a given number using pointers.
*/
#include<stdio.h>
#include<conio.h>
int fact(int *);
int main()
{
    int x,y,z;
    puts("Enter  integer : ");
    scanf("%d",&x);
    z=x;
    y=fact(&x);
    printf("factorial of %d is  %d\n",z,y);
    return 0;
}
int fact(int *a)
{
    int ans=1;
    while(*a>0)
    {
        ans*=*a;
        *a=*a-1;
    }
    return ans;
}

