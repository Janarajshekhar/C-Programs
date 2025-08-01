#include<stdio.h>
void shift(int a[],int n);
void display(int a[],int n);
int main()
{
    int a[10],n,i;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    display(a,n);
    shift(a,n);
    display(a,n);
}

void shift(int a[],int n)
{
    int i;
    int temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
}

void display(int a[],int n)
{
    int i;
    printf("\n array element : ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}