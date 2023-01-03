#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	printf("\n**Roots calculator**:");
	float a,b,c,d,rt,im;
	printf("\nEnter value for a,b&c in ax^2+bx+c:");
	printf("\na:");
	scanf("%f",&a);
	printf("\nb:");
	scanf("%f",&b);
	printf("\nc:");
	scanf("%f",&c);
	if(a==0&&b==0)
	{
		printf("\nNo solution:");
		return 0;
	}
	if(a==0)
	{
		printf("Equation is linear\n and root is:%3f",-c/b);
		return 0;
	}
	d=(b*b)-(4*a*c);
	if(d==0)
	{
		printf("One Root:%3f",-b/(2*a));
		return 0;
	}
	rt=-b/(2*a);
	im=d>0?sqrt(d):sqrt(-d);
	im=im/(2*a);
	if(d>0)
	{
		printf("Two real roots :%3fand %3f",rt+im,rt-im);
		return 0;
	}
	if(d<0)
	{
		printf("\nTwo imaginary Roots:%3f+%3f and %3f-%3f",rt,im,rt,im);
		return 0;
	}
	return 0;
}