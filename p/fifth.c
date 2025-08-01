#include<stdio.h>
struct pointer{
    char name[50];
    int roll;
};

int main()
{
    struct pointer p;
    printf("\n Enter name : ");
    fgets(p.name,50,stdin);
    printf("\n Enter roll : ");
    scanf("%d",&p.roll);
    struct pointer *a;
    a=&p;
    printf("\n name : %s",a->name);
    printf("\n Roll : %d",a->roll);
}