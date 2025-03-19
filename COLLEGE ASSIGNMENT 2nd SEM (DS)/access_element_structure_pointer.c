#include<stdio.h>
struct book
{
    int bookid;
    char title[50];
    float price;
};

int main()
{
    struct book s;
    printf("\n Enter bookid, title and price : ");
    scanf("%d",&s.bookid);
    scanf("%s",s.title);
    scanf("%f",&s.price);

    struct book *ptr;

    ptr = &s;
    printf("\n access element details : ");
    printf("\n bookid : %d",ptr->bookid);
    printf("\n title : %s",ptr->title);
    printf("\n price : %f",ptr->price);
}