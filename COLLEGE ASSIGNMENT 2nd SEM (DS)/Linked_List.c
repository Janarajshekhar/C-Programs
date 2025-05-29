#include<stdio.h>
#include<stdlib.h>

struct node
{
    int item;
    struct node*next;
};

void insertAtLast(struct node**s)
{
    int data;
    printf("\n Enter data : ");
    scanf("%d",&data);
    struct node *n,*t;
    n=malloc(sizeof(struct node));
    n->item=data;
    n->next=NULL;
    if(*s==NULL)
        *s=n;
    else
    {
        t=*s;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
    }
}

void deleteFirst(struct node **s)
{
    struct node *t;
    if(*s==NULL)
    {
        printf("\n List empty");
    }
    else
    {
        t=*s;
        *s=t->next;
        free(t);
    }
}

void viewList(struct node *start)
{
    if(start==NULL)
    {
        printf("\n List empty");
    }
    else
    {
        while(start!=NULL)
        {
            printf("%d  ",start->item);
            start=start->next;
        }
    }
}

int menu()
{
    int a;
    printf("\n 1. create node");
    printf("\n 2. delete node");
    printf("\n 3. view list");
    printf("\n 4. quit");
    printf("\n Enter your choich : ");
    scanf("%d",&a);
    return a;
}

int main()
{
    struct node *start = NULL;
    int n;
    while(1)
    {
    n=menu();
    switch (n)
        {
        case 1:
            insertAtLast(&start);
            break;
        case 2:
            deleteFirst(&start);
            break;
        case 3:
            viewList(start);
            break;
        case 4:
            exit(0);
        }
    }
}

