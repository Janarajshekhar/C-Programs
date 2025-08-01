#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int stack[MAX];
int top=0;

void push()
{
    int data;
    if(top==MAX)
        printf("\n Stack is overflow");
    else
    {
        printf("\n Enter data : ");
        scanf("%d",&data);
        stack[top]=data;
        top=top+1;
        printf("\n data push the stack successful");
    }
}
void pop()
{
    if(top==0)
        printf("\n Stack is underflow");
    else
        printf("\n pop element is %d",stack[--top]);
}

void display()
{
    int i;
    if(top==0)
        printf("\n stack is empty");
    else
    {
        printf("\n stack element is : ");
        for(i=0;i<top;i++)
        {
            printf("%d  ",stack[i]);
        }
    }
}

int menu()
{
    int a;
    printf("\n 1. push");
    printf("\n 2. pop");
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
            push();
            break;
        case 2:
            pop();
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