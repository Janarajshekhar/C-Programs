#include<stdio.h>    // header file
#include<stdlib.h>   // header file
int manu();          // function declaration
void display();      // function declaration
void pop();          // function declaration
void push();         // function declaration
#define MAX 6        // difine stack size
int stack[MAX];      // declaration stack global variable
int top=0;           // declaration global variable
int main()           // main fulction
{
    int ch;          // declaration local variable
    while(1)         // while loop
    {
        ch=manu();      // call the manu function 
        switch(ch)      // switch statment
        {
            case 1:      //case statment
                push();     // call the puse function
                break;      // exit the switch-case
            case 2:      //case statment
                pop();      // call the pop function
                break;      // exit the switch-case
            case 3:      //case statment
                display();  // call the display function
                break;      // exit the switch-case
            case 4:      //case statment 
                exit(0);    // exit the program
        }
    }
    return 0;
}

int manu()           // function defination
{
    int ch;          // declaration local variable
    printf("\n stack operating using ARRAY ....\n");      // output function
    printf("\n *....*....*....***....*....*....*\n");     // output function
    printf("\n 1. Push");               // output function
    printf("\n 2. Pop");                // output function
    printf("\n 3. Display");            // output function
    printf("\n 4. Quit");               // output function
    printf("\n Enter your choich : ");  // output function
    scanf("%d",&ch);            // input function
    return ch;                  //function return value
}

void display()          // function defination
{
    int i;              // declaration local variable         
    if(top==0)          // if statment
    {
        printf("\n\n stack empty....");     // output function
    }
    else                // else statment
    {
        printf("\n\n Element in stack : ");     // output function
        for(i=0;i<top;i++)                      //for loop
            printf("%d  ",stack[i]);            // output function
    }
}

void pop()           // function defination
{                      
    if(top==0)       // if statment
    {
        printf("\n\n stack underflow....");    // output function
    }
    else             // else statment
    {
        printf("\n\n poped element is %d",stack[--top]);    // output function   
        // stack[--top] = { top=top-1; stack[top] }
    }
}

void push()          // function defination
{
    int data;        // declaration local variable
    if(top==MAX)     // if statment
    {
        printf("\n\n stack overflow....");      // output function
    }
    else             // else statment
    {
        printf("\n\n enter data : ");        // output function
        scanf("%d",&data);                  // input function
        stack[top]=data;                    
        top=top+1;
        printf("\n\n data pushed into the stack");      // output function
    }
}
