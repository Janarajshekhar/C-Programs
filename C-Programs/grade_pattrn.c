#include<stdio.h>
int main()
{
    int marks[100],n,i,j=0,k=0,l=0,m=0,o=0,a,b,c,d,e;
    printf("\n Enter how many student : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    printf("\n Enter the %d NO. students marks : ",i);
    scanf("%d",&marks[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(marks[i]<=100 && marks[i]>=90) //A
        {
            j++;
        }
        else if(marks[i]<90 && marks[i]>=80) //B
        {
            k++;
        }
        else if(marks[i]<80 && marks[i]>=70) //C
        {
            l++;
        }
        else if(marks[i]<70 && marks[i]>=60) //D
        {
            m++;
        }
        else if(marks[i]<60 && marks[i]>=0) //F
        {
            o++;
        }
        else if(marks[i]<0 && marks[i]>100)
        {
            printf("\n enter marks is wrong , try again");
        }
    }
    printf("\n A :");
    for(a=1;a<=j;a++)
    printf("*");
    printf("\n B :");
    for(b=1;b<=k;b++)
    printf("*");
    printf("\n C :");
    for(c=1;c<=l;c++)
    printf("*");
    printf("\n D :");
    for(d=1;d<=m;d++)
    printf("*");
    printf("\n F :");
    for(e=1;e<=o;e++)
    printf("*");
}