#include<stdio.h>
void find_max_min(int a[],int n);
int main()
{
    int a[50],n,i;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    find_max_min(a,n);
}
void find_max_min(int a[],int n)
{
    int max,min,i;
    max=a[0];
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
    }
    printf("\n Max = %d",max);
    printf("\n min = %d",min);
}