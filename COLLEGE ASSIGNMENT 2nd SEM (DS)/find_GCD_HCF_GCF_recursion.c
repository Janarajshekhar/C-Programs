#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
    int num1,num2,GCD;
    printf("\n Enter two number : ");
    scanf("%d%d",&num1,&num2);
    GCD = gcd(num1,num2);
    printf("\n GCD/HCF/GCF of %d and %d is : %d",num1,num2,GCD);
}
int gcd(int num1,int num2)
{
    int result;
    if(num2==0)
        return num1;
    else
        result = gcd(num2 , num1 % num2);
    return result;
}