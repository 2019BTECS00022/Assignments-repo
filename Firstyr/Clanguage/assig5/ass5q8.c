
Write c program to Convert an octal Number to decimal and vice-versa.
*/
#include<conio.h>
#include<stdio.h>
int OtoD(int oc)
{
    int res=0,i=1;
    while(oc>0)
    {
        res=res+(i*(oc%10));
        i*=8;
        oc/=10;
    }
    return res;
}
int DtoO(int dec)
{
    int res=0,i=1;
    while(dec>0)
    {
        res=((res*i)+(dec%8));
        i*=10;
        dec/=8;
    }
    return res;
}
int main()
{
    int num,res,ch;
    again:
    printf("Choose Option:\n1.Octal to Decimal\n2.Decimal to Octal\nOption:");
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
        printf("Enter octal Number:");
        while(1)
        {
            ch=getch();
            if(ch>='0'&&ch<='7')
            {
                printf("%d",ch-48);
                num=num*10+ch-'0';
            }
            if(ch==13||ch=='\0')
                break;
        }
        res=OtoD(num);
        printf("\nGiven Octal Number=%d\nEquivalent Decimal Number=%d",num,res);
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
        res=DtoO(num);
        printf("\nGiven Decimal Number=%d\nEquivalent Octal Number=%d",num,res);
    }
    return 0;
}
