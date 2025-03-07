#include<stdio.h>
#include<math.h>
#include<string.h>
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
int main()
{
    // f1();
    // f2();
    // f3();
    // f4();
    // f5();
    // f6();
    // f7();
    f8();
}
void f1()
{
    int a,b,i,j,sum1=0,sum2=0;
    printf("\n Enter two number : ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(j=1;j<=b/2;j++)
    {
        if(b%j==0)
        {
            sum2=sum2+j;
        }
    }
    if(sum1==b && sum2==a)
        printf("\n %d and %d is amicable number",a,b);
    else
        printf("\n %d and %d is not amicable number",a,b);
}
void f2()
{
    int n,a=0,b=1,c;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("\n fibonacci series form 0 to %d : ",n);
    printf("%d\t",a);
    printf("%d\t",b);
    c=a+b;
    while(c<=n)
    {
        printf("%d\t",c);
        a=b;
        b=c;
        c=a+b;
    }
}
void f3()
{
    int n,a=0,b=1,c,i;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("\n First %d term fibonacci number is : ",n);
    printf("%d\t",a);
    printf("%d\t",b);
    c=a+b;
    for(i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
}
void f4()
{
    int n,a=0,b=0,c=1,d;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("\n tribonacci series from 0 to %d : ",n);
    printf("%d\t",a);
    printf("%d\t",b);
    printf("%d\t",c);
    d=a+b+c;
    while(d<=n)
    {
        printf("%d\t",d);
        a=b;
        b=c;
        c=d;
        d=a+b+c;
    }
}
void f5()
{
    int n,a=0,b=0,c=1,d,i;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("\n tribonacci series from 0 to %d : ",n);
    printf("%d\t",a);
    printf("%d\t",b);
    printf("%d\t",c);
    d=a+b+c;
    for(i=4;i<=n;i++)
    {
        d=a+b+c;
        a=b;
        b=c;
        c=d;
        printf("%d\t",d);
    }
}
void f6()
{
    int x,n,s=1,i;
    printf("\n Enter the value of x : ");
    scanf("%d",&x);
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+pow(x,i);
    }
    printf("\n 1 + x + x^2 + x^3 + ... + x^n = %d",s);
}
void f7()
{
    int x,n,s=1,i;
    printf("\n Enter the value of x : ");
    scanf("%d",&x);
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+1/pow(x,i);
    }
    printf("\n 1 + 1/x + 1/x^2 + 1/x^3 + ... + 1/x^n = %d",s);
}
void f8()
{
    char a[50],b[50];
    int len,i,j;
    printf("\n Enter a string :");
    fgets(a,sizeof(a),stdin);
    len=strlen(a);
    if(a[len-1]=='\n')
    {
        a[len-1]='\0';
        len--;
    }
    for(i=0,j=len-1;j>=0;j--,i++)
    {
        b[i]=a[j];
    }
    b[i]='\0';
    printf("\n reverse string is %s",b);
    if(strcmp(a,b)==0)
        printf("\n string is palindrom");
    else
        printf("\n string is not palindrom");
}