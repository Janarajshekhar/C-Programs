#include<stdio.h>
int main()
{
    int n,i,j,a;
    printf("\n Enter a number : ");
    scanf("%d",&n);
    if(n<0)
    {
        n=-n;
    }
    a=n;
    for(i=0;n!=0;i++)
    {
        n=n/10;
    }
    printf("\n %d",i);
    for(j=i-1;j>=0;j--)
    {
        a=a/10;
    }
    printf("\n %d",a);
}