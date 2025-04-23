#include<stdio.h>
int binary_search(int a[],int low,int high,int k);
int main()
{
    int a[100],n,k,i,result;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter sorted %d number : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Enter search element : ");
    scanf("%d",&k);
    result=binary_search(a,0,n-1,k);
    if(result!=1)
        printf("\n Element found at index %d",result);
    else
        printf("\n Element not found in the array");
    return 0;
}
int binary_search(int a[],int low,int high,int k)
{   
    int mid=(low+high)/2;
    if(low>high)
        return 1;
    else if(a[mid]==k)
        return mid;
    else if(a[mid]>k)
        return binary_search(a,low,mid-1,k);
    else
        return binary_search(a,mid+1,high,k);
}