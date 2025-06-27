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

void deleteNode(){
    struct node *r;
    if(START==NULL)
        printf("List is empty");
    else
    {
        r=START;
        START=START->link;
        free(r);
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
    printf("\n3. deleteNode at first");
    printf("\n4. View list");
    printf("\n5. Exit");
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
                deleteNode();
                break;
            case 4:
                viewList(START);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}