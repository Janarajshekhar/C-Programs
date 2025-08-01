#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int Q[MAX];
int front=0,rear=0;

void enqueue()
{
    int data;
    if(rear==MAX)
        printf("\n Queue is full");
    else
    {
        printf("\n Enter data : ");
        scanf("%d",&data);
        Q[rear]=data;
        rear++;
        printf("\n data enseart in the queue");
    }
}

void dequeue()
{
    if(front==rear)
        printf("\n Queue is empty");
    else
    {
        printf("\n remove element is %d",Q[front]);
        front++;
    }
}

void display()
{
    int i;
    if(front==rear)
        printf("\n Queue is empty");
    else
    {
        printf("\n Queue element is : ");
        for(i=front;i<rear;i++)
        {
            printf("%d  ",Q[i]);
        }
    }
}

int menu()
{
    int a;
    printf("\n 1. enqueue");
    printf("\n 2. dequeue");
    printf("\n 3. Display");
    printf("\n 4. Quit");
    printf("\n Enter your choich : ");
    scanf("%d",&a);
    return a;
}

int main()
{
    int ch;
    while(1)
    {
        ch=menu();
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\n Invalid choich");
        }
    }
}