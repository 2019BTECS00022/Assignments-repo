
Write C Program to Display Prime Numbers Between Intervals Using Function.
*/
#include<conio.h>
#include<stdio.h>
 void isprime(int a,int b)
{
    int z,i=0,j,sq;
    z=b-a+1;
    int arr[z];
    printf("Total Prime Number in range %d to %d is:",a,b);
    while(a<=b)
    {
        if(a<2)
            a=2;
        if(a==2)
        {
            arr[i]=2;
            i++;
            a++;
        }
        sq=sqrt(a);
        for(j=2;j<=sq;j++)
        {
            if(a%j==0)
                break;
        }
        if(j>sq)
        {
            arr[i]=a;
            i++;
        }
        a++;
    }
    printf("%d\n",i);
    for(j=0;j<i;j++)
    {
       printf("%d\t",arr[j]);
    }
}
int main()
{
    int first,last,squareroot,i;
    again:
    printf("---------------Prime_Number_Detector---------------\n");
    printf("Enter the initial number:");
    scanf("%d",&first);
    if(first<0)
    {
        printf("Warning:Invalid Input\nPlease try again");
        getch();
        system("cls");
        goto again;
    }
    printf("Enter the last number:");
    scanf("%d",&last);
    if(first>last)
    {
        printf("Warning:Invalid Input\nPlease try again");
        getch();
        system("cls");
        goto again;
    }
    isprime(first,last);
    return 0;
}
