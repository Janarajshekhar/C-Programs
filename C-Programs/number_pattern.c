#include<stdio.h>
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
void f9();
int main()
{
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    return 0;
}
void f1()
{
    int n,i,j;
    printf("\n how many row enter :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" %d ",j);
        printf("\n");
    }
}
void f2()
{
    int n,i,j;
    printf("\n how many row enter :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf("   ");
        for(j=1;j<=i;j++)
        printf(" %d ",j);
        printf("\n");
    }
}
void f3()
{
    int n,i,j;
    printf("\n how many row enter :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf(" %d ",j);
        printf("\n");
    }
}
void f4()
{
    int n,i,j;
    printf("\n how many row enter :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf(" * ");
        printf("\n");
    }
}
void f5()
{
    int n,i,j;
    printf("\n how many row enter :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" %d ",i);
        printf("\n");
    }
}
void f6()
{
    int m,n,i,j;
    printf("\n how many row enter :");
    scanf("%d",&n);
    printf("\n how many column enter :");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        if(i==1||i==n||j==1||j==m)
        printf(" # ");
        else
        printf("   ");
        printf("\n");
    }
}
void f7()
{
    int n,i,j;
    n=3;
    // printf("\n how many row enter :");
    // scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf("   ");
        for(j=1;j<=(2*i)-1;j++)
        printf(" * ");
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        printf("   ");
        for(j=1;j<=(2*i)-1;j++)
        printf(" * ");
        printf("\n");
    }
}
void f8()
{
    int n,i,j,k;
    printf("\n how many row enter :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=(n*2)-1;j++)
        {
            if(j>=(n+1)-i && j<=(n-1)+i)
            {
                printf(" %d ",k);
                j<n?k++:k--;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void f9()
{
    int n,i,j;
    printf("\n how many row enter :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(j>=i && j<=n)
        printf(" * ");
        else
        printf("   ");
        printf("\n");
    }
}