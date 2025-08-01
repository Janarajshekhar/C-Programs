#include<stdio.h>
void MaxMin(int a[],int n);
int main()
{
    int a[10],n,i,result;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    MaxMin(a,n);
}

void MaxMin(int a[],int n)
{
    int i;
    int Max=a[0];
    int Min=a[0];
    for(i=0;i<n;i++)
    {
        if(Max<a[i])
            Max=a[i];
        if(Min>a[i])
            Min=a[i];
    }
    printf("\n Max : %d",Max);
    printf("\n Min : %d",Min);
}