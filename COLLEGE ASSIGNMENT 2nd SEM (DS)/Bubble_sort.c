#include<stdio.h>
void sort(int a[],int n);
int main()
{
    int a[50],n,i;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
}
void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n Sorted array is : ");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}