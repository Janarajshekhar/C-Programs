#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    char department_name[50];
    int reg;
    int roll;
    float marks;
};
int main()
{
    struct student student[2];
    int i;
    printf("\n Enter information of 10 students : .......................... ");
    for(i=0 ; i<2 ; i++)
    {
        printf("\n Student %d : ",i+1);
        printf("\n Enter student name : ");
        scanf(" %[^\n]",student[i].name);
        printf("\n Enter sudent department : ");
        scanf(" %[^\n]",student[i].department_name);
        printf("\n Enter student registration number : ");
        scanf("%d",&student[i].reg);
        printf("\n Enter student roll number : ");
        scanf("%d",&student[i].roll);
        printf("\n Enter student marks : ");
        scanf("%f",&student[i].marks);
    }
    printf("\n");
    printf("\n Stored student information : ................................ ");
    for(i=0 ; i<2 ; i++)
    {
        printf("\n");
        printf("\n Student %d : ",i+1);
        printf("\n Student name : %s",student[i].name);
        printf("\n Student department : %s",student[i].department_name);
        printf("\n Student registration number : %d",student[i].reg);
        printf("\n Student roll number : %d",student[i].roll);
        printf("\n Student marks : %0.2f",student[i].marks);
    }
}