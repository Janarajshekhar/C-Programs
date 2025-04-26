#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int Q[MAX];
int front,rear;
int menu()
{
    int ch;
    printf("\n Queue oparation using ARRAY.......");
    printf("\n 1. Enqueue");
    printf("\n 2. Dequeue");
    printf("\n 3. display");
    printf("\n 4. Quit");
    printf("\n Enter your choich : ");
    scanf("%d",&ch);
    return ch;
}
void Enqueue()
{
    int data;
    if(rear==MAX)
        printf("\n Linrar Queue is full");
    else
    {
        printf("\n Enter data : ");
        scanf("%d",&data);
        Q[rear]=data;
        rear++;
        printf("\n Data inserted in the Queue");
    }
}
void Dequeue()
{
    if(rear==front)
        printf("\n Queue is Empty");
    else
    {
        printf("\n Delete element form Queue is %d ",Q[front]);
        front++;
    }
}
void DisplayQueue()
{
    int i;
    if(front==rear)
        printf("\n Queue is Empty");
    else
    {
        printf("\n Element is Queue are : ");
        for(i=front;i<rear;i++)
        {
            printf("%d  ",Q[i]);
        }
    }
}

int main()
{
     int ch;
     while(1)
     {
         ch=menu();
         switch(ch)
         {
         case 1:
            Enqueue();
            break;
         case 2:
            Dequeue();
            break;
         case 3:
            DisplayQueue();
            break;
        case 4:
            exit(0);
         }
     }
     return 0;
}