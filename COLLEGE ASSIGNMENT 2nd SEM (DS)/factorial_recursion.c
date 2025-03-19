#include<stdio.h>
int factorial(int num);
int main()
{
    int num,k;
    printf("\n Enter a integer number : ");
    scanf("%d",&num);
    k=factorial(num);
    printf("\n Factorial of %d is %d",num,k);
}
int factorial(int num)
{
    int fact;
    if(num==0 || num==1)
    {
        return 1;
    }
    else
        fact=num*factorial(num-1);
    return(fact);
}