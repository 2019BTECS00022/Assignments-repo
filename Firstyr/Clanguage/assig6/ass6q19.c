/*Assignment No.6
batch CSE-2
question 19:
Write a program in C to show a pointer to union.
*/
#include <stdio.h>
#include <conio.h>
union empAdd
{
    char *ename;
    char stname[20];
    int pincode;
};
int main()
{
 	printf("\n\n Pointer : Show a pointer to union :\n");
    union empAdd employee,*pt;
    employee.ename="Jhon Mc\0Donald";
    pt=&employee;
    printf(" %s now with pointer  %s\n\n",pt->ename,(*pt).ename);
    return 0;
}
