#include<stdio.h>
#include<conio.h>
void matrix_addition_of_two_m__n_matrix();
void matrix_subtraction_of_two_m__n_matrix();
void transpose_of_a_given_matrix();
int main()
{
    // matrix_addition_of_two_m__n_matrix();
    matrix_subtraction_of_two_m__n_matrix();
    // transpose_of_a_given_matrix();
    return 0;
}
void matrix_addition_of_two_m__n_matrix()
{
    int a[100][100],b[100][100],c[100][100],m,n,i,j;
    printf("\n Enter the value of m : ");
    scanf("%d",&m);
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("\n Enter the first matrix element : ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("\n Enter the second matrix element : ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    printf("\n sum of two matrix is : ");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",c[i][j]);
        }
    printf("\n");
    }
}
void matrix_subtraction_of_two_m__n_matrix()
{
    int a[100][100],b[100][100],c[100][100],m,n,i,j;
    printf("\n Enter the value of m : ");
    scanf("%d",&m);
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("\n Enter the first matrix element : ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("\n Enter the second matrix element : ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    printf("\n sum of two matrix is : ");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",c[i][j]);
        }
    printf("\n");
    }
}
void transpose_of_a_given_matrix()
{
    int a[100][100],temp,m,i,j,k;
    printf("\n Enter the number of row : ");
    scanf("%d",&m);
    printf("\n Enter the %d matrix element : ",m*m);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    for(i=0,j=1,k=1;k<=m;k++)
    {
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
            if(j-i==1)
                j++;
            else
                i++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}