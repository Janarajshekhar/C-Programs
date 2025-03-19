#include<stdio.h>
#include<stdlib.h>
void display();
void pop();
void push();
#define max 6
int stack[max];
int top=0;
int main()
{
    int ch;
    printf("\n stack operating using ARRAY ....\n");
    printf("\n *....*....*....***....*....*....*\n");
    while(1){
    printf("\n 1. Push");
    printf("\n 2. Pop");
    printf("\n 3. Display");
    printf("\n 4. Quit");
    printf("\n Enter your choich : ");
    scanf("%d",&ch);
        switch(ch)
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
        }
    }
    return 0;
}

void display()
{
    int i;
    if(top==0)
    {
        printf("\n\n stack empty....");
    }
    else
    {
        printf("\n\n Element in stack : ");
        for(i=0;i<top;i++)
            printf("%d  ",stack[i]);
    }
}

void pop()
{
    if(top==0)
    {
        printf("\n\n stack underflow....");
    }
    else
    {
        printf("\n\n poped element is %d",stack[--top]); // stack[--top] = { top=top-1; stack[top] }
    }
}

void push()
{
    int data;
    if(top==max)
    {
        printf("\n\n stack overflow....");
    }
    else
    {
        printf("\n\n enter data : ");
        scanf("%d",&data);
        stack[top]=data;
        top=top+1;
        printf("\n\n data pushed into the stack");
    }
}