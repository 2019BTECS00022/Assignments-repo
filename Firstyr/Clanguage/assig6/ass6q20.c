/*Assignment No.6
batch CSE-2
question 20:
Write a program in C to show a pointer to an array which contents are pointer to structure.
*/
#include<stdio.h>
#include<string.h>
struct student
{
    char name[200];
    char rollno[15];
    float pointer;
};
void print(struct student info[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Name: ");
        puts(info[i].name);
        printf("Roll no: %s \n",info[i].rollno);
        printf("pointer : %.3f \n",info[i].pointer);
        printf("\n\n");
    }
}
int main()
{
    int n;
    printf("Enter total no of students : \n");
    scanf("%d",&n);
    fflush(stdin);
    struct student info[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter name of student\n");
        gets(info[i].name);
        printf("Enter roll no\n");
        scanf("%s",info[i].rollno);
        printf("Enter pointer of student\n");
        scanf("%f",&info[i].pointer);
        fflush(stdin);
    }
    system("cls");
    print(info,n);
    getch();
    return 0;
}
