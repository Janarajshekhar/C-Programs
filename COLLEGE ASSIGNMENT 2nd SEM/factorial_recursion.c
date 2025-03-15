#include<stdio.h>
void find_the_factorial_of_an_integer_using_recursion();
int factorial(int num);
int main()
{
    find_the_factorial_of_an_integer_using_recursion();
}
void find_the_factorial_of_an_integer_using_recursion()
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
    fact=num*factorial(num-1);
        return(fact);
}