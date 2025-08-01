#include<stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks[5];
    float total;
    float percentage;
};

int main()
{
    struct student s;
    s.total=0;
    int i;
    printf("\n Enter name : ");
    fgets(s.name,50,stdin);
    printf("\n Enter roll number : ");
    scanf("%d",&s.roll);
    printf("\n Enter 5 subject marks : ");
    for(i=0;i<5;i++)
    {
        printf("\n Enter subject%d marks : ",i+1);
        scanf("%f",&s.marks[i]);
        s.total=s.total+s.marks[i];
    }
    s.percentage=s.total/5;

    printf("\n Name : %s",s.name);
    printf("\n Roll : %d",s.roll);
    printf("\n Marks in subject : ");
    for(i=0;i<5;i++)
    {
        printf("\n subject%d : %0.2f",i+1,s.marks[i]);
    }
    printf("\n Total marks : %0.2f",s.total);
    printf("\n precentage : %0.2f",s.percentage);

    if(s.percentage>=60)
        printf("\n Grade A");
    else if(s.percentage>=50)
        printf("\n Grade B");
    else if(s.percentage>=40)
        printf("\n Grade C");
    else if(s.percentage>=30)
        printf("\n Grade D");
    else
        printf("Fail");
}