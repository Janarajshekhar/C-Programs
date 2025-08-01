#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

struct node *getnode()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    return temp;
}

void addNode_at_end()
{
    struct node *newnode, *temp;
    newnode = getnode();
    printf("\n Emter data : ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (start == NULL)
        start = newnode;
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void creatList(int n)
{
    struct node *newnode,*temp;
    int i;
    for (int i = 0; i < n; i++)
    {
        newnode = getnode();
        printf("\n Emter data : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (start == NULL)
            start = newnode;
        else
        {
            temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}

void addNode_at_begining()
{
    struct node *newnode;
    newnode=getnode();
    printf("\n Enter data : ");
    scanf("%d",&newnode->data);
    if(start==NULL)
        start=newnode;
    else
    {
        newnode->next=start;
        start=newnode;
    }
}

int countNode(struct node *ptr)
{
    int count=0;
    while (ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    return count;
}

void addNode_at_mid()
{
    struct node *newnode,*temp,*t;
    int pos,count,i=1;
    newnode=creatNode();
    printf("\n Enter Data : ");
    scanf("%d",&newnode->data);
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