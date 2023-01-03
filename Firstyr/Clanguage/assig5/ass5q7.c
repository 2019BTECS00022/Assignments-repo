
Write c program to Convert a binary number to decimal and vice-versa.
*/
#include<conio.h>
#include<stdio.h>
int BtoD(int bi)
{
    int res=0,i=1;
    while(bi>0)
    {
        res=res+(i*(bi%10));
        i*=2;
        bi/=10;
    }
    return res;
}
int DtoB(int dec)
{
    int res=0,i=1;
    while(dec>0)
    {
        res=((res*i)+(dec%2));
        i*=10;
        dec/=2;
    }
    return res;
}
int main()
{
    int num,res,ch;
    again:
    printf("Choose Option:\n1.Binary to Decimal\n2.Decimal to Binary\nOption:");
    scanf("%d",&num);
    if(num<1||num>2)
    {
        printf("Invalid Input");
        getch();
        system("cls");
        goto again;
    }
    if(num==1)
    {
        num=0;
        printf("Enter binary Number:");
        while(1)
        {
            ch=getch();
            if(ch=='0'||ch=='1')
            {
                printf("%d",ch-48);
                num=num*10+ch-'0';
            }
            if(ch==13||ch=='\0')
                break;
        }
        res=BtoD(num);
        printf("\nGiven Binary Number=%d\nEquivalent Decimal Number=%d",num,res);
    }
    else
    {
        num=0;
        printf("Enter decimal Number:");
        while(1)
        {
            ch=getch();
            if(ch>='0'&&ch<='9')
            {
                printf("%d",ch-48);
                num=num*10+ch-48;
            }
            if(ch==13||ch=='\0')
                break;
        }
        res=DtoB(num);
        printf("\nGiven Decimal Number=%d\nEquivalent binary Number=%d",num,res);
    }
    return 0;
}
