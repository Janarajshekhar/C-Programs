#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *START=NULL;

struct node* createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
} 

void insertNode()
{
    struct node *temp,*t;
    temp=createNode();
    printf("\n Enter a number :");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START==NULL)
    {
        START=temp;
    }
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }
}

void createList(int n)
{
    struct node *temp,*t;
    for(int i = 0; i < n; i++)
    {
        temp=createNode();
        printf("\n Enter a number :");
        scanf("%d",&temp->info);
        temp->link=NULL;
        if(START==NULL)
        {
            START=temp;
        }
        else
        {
            t=START;
            while(t->link!=NULL)
            {
                t=t->link;
            }
            t->link=temp;
        }
    }
}

void viewList(struct node *START)
{
    if(START==NULL)
    {
        printf("\n List empty");
    }
    else
    {
        while(START!=NULL)
        {
            printf("%d  ",START->info);
            START=START->link;
        }
    }
}

int menu()
{
    int ch;
    printf("\n1. Create a list");
    printf("\n2. Insert at end");
    printf("\n3. View list");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}

int main()
{
    int ch, n;
    while(1)
    {
        ch = menu();
        switch(ch)
        {
            case 1:
                printf("Enter How many nodes : ");
                scanf("%d", &n);
                createList(n);
                break;
            case 2:
                insertNode();
                break;
            case 3:
                viewList(START);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}