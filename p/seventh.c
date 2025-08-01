#include<stdio.h>
int linear(int a[],int k,int n,int index);
int main()
{
    int a[10],n,i,k,result;
    printf("\n Enter how many number : ");
    scanf("%d",&n);
    printf("\n Enter %d number : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter search element : ");
    scanf("%d",&k);
    result=linear(a,k,n,0);
    if(result!=1)
        printf("\n Element found at index %d",result);
    else
        printf("\n Element not found");
}

int linear(int a[],int k,int n,int index)
{
    if(index>=n)
        return 1;
    else if(a[index]==k)
        return index;
    else
        return linear(a,k,n,index+1);
}