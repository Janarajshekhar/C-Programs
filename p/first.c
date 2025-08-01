#include<stdio.h>
#include<conio.h>
int fact(int n);
int main()
{
    int num,result;
    printf("\n Enter a number : ");
    scanf("%d",&num);
    result=fact(num);
        printf("factorial of %d is %d",num,result);
}
int fact(int n)
{
    int result=1;
    if(n==0 || n==1)
        return 1;
    else
        result=n*fact(n-1);
    return result;
}