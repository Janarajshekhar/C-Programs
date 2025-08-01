#include<stdio.h>
int binary(int a[],int k,int min,int max);
int main()
{
    int a[10],n,i,k,result;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d sorted number : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Enter search element : ");
    scanf("%d",&k);
    result=binary(a,k,0,n-1);
    if(result!=1)
        printf("\n Element found at index no %d",result);
    else
        printf("\n Element not found");
}

int binary(int a[],int k,int min,int max)
{
    int mid=((min+max)/2);
    if(min>max)
        return 1;
    else if(a[mid]==k)
        return mid;
    else if(a[mid]>k)
        return binary(a,k,min,mid-1);
    else
        return binary(a,k,mid+1,max);
}