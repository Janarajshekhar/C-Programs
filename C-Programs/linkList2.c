#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int info;
    struct node *next;
};
struct node *start=NULL;

struct node * createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return n;
}

void addNodeAtEnd()
{
    struct node *temp,*t;
    temp=createNode();
    printf("\n Enter a data : ");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        t=start;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=temp;
    }
}

void addNodeAtBegin()
{
    struct node *temp;
    temp=createNode();
    printf("\n Enter a data : ");
    scanf("%d",&temp->info);
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
        start=temp;
    }
}

int countNode(struct node *start)
{
    int count=0;
    while(start!=NULL)
    {
        count++;
        start=start->next;
    }
    return count;
}

void addNodeAtMid()
{
    struct node *newnode,*temp,*t;
    int pos,count,i=1;
    newnode=createNode();
    printf("\n Enter Data : ");
    scanf("%d",&newnode->info);
    printf("\n Enter insert position : ");
    scanf("%d",&pos);
    count=countNode(start);
    if(pos>1 && pos<count)
    {
        temp=start;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        t=temp->next;
        temp->next=newnode;
        newnode->next=t;
    }
    else
    {
        printf("\n Position %d is not mid position",pos);
    }
}

void createList(int n)
{
    struct node *temp,*t;
    for(int i=0;i<n;i++)
    {
        temp=createNode();
        printf("\n Enter a data : ");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
            start=temp;
        }
        else
        {
            t=start;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=temp;
        }
    }
}

void viewList(struct node *start)
{
    struct node *p=start;
    if(p==NULL)
    {
        printf("\n List is empty");
    }
    else
    {
        while(p!=NULL)
        {
            printf("%d  ",p->info);
            p=p->next;
        }
    }
}

int menu()
{
    int a;
    printf("\n1. Create List");
    printf("\n2. Add Node At End");
    printf("\n3. Add Node At Begin");
    printf("\n4. Add Node At Mid");
    printf("\n5. view List");
    printf("\n6. Quit");
    printf("\n7: Count Node");
    printf("\n Enter your choich : ");
    scanf("%d",&a);
    return a;
}

int main()
{
    int a,n;
    while(1)
    {
        a=menu();
        switch(a)
        {
            case 1:
                printf("\n Enter how many node : ");
                scanf("%d",&n);
                createList(n);
                break;
            case 2:
                addNodeAtEnd();
                break;
            case 3:
                addNodeAtBegin();
                break;
            case 4:
                addNodeAtMid();
                break;
            case 5:
                viewList(start);
                break;
            case 6:
                exit(0);
                break;
            case 7:
                printf("%d",countNode(start));
                break;
            default:
                printf("\n Invalid choich, Try again");
        }
    }
}