#include<stdio.h>
#include<math.h>
void calculat_the_sum_of_first_n_natural_number_using_loop();
void count_the_digites_of_a_integer();
void find_the_revers_of_a_integer();
void check_a_number_is_palindrom_or_not();
void check_a_number_is_armstrong_number_or_not();
void check_a_number_is_prime_or_not();
void check_a_number_is_strong_or_not();
void fibonacci_squence_from_0_to_n();
void even_fibonacci_squence_from_0_to_n();
void odd_fibonacci_squence_from_0_to_n();
void function_1();
void function_2();
void function_3();
void function_4();
void function_5();
void function_6();
int main()
{
    // calculat_the_sum_of_first_n_natural_number_using_loop();
    // count_the_digites_of_a_integer();
    // find_the_revers_of_a_integer();
    // check_a_number_is_palindrom_or_not();
    // check_a_number_is_armstrong_number_or_not();
    // check_a_number_is_prime_or_not();
    // check_a_number_is_strong_or_not();
    // fibonacci_squence_from_0_to_n();
    // even_fibonacci_squence_from_0_to_n();
    // odd_fibonacci_squence_from_0_to_n();
    // function_1();
    // function_2();
    // function_3();
    // function_4();
    // function_5();
    function_6();
    return 0;
}
void calculat_the_sum_of_first_n_natural_number_using_loop()
{
    int n,i,s=0;
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("\n sum = %d",s);
}
void count_the_digites_of_a_integer()
{
    int a,i;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(i=0;a!=0;i++)
    {
        a=a/10;
    }
    printf("digit is %d",i);
}
void find_the_revers_of_a_integer()
{
    int a,r=0,s;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(;a!=0;a=a/10)
    {
        s=a%10;
        r=10*r+s;
    }
    printf("\n revers number is %d",r);
}
void check_a_number_is_palindrom_or_not()
{
    int a,b,c,r=0;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    b=a;
    for(;a!=0;a=a/10)
    {
        c=a%10;
        r=10*r+c;
    }
    if(b==r)
    printf("\n %d is a palindrom number",b);
    else
    printf("\n %d is not a palindrom number",b);
}
void check_a_number_is_armstrong_number_or_not()
{
    int a,y,n=0,i,sum=0,d,p;
    printf("\n");
    printf("\n Enter a number : ");
    scanf("%d",&a);
    y=a;
    for(y=a;y;n++)
    {
        y=y/10;
    }
    for(y=a;y;y=y/10)
    {
        d=y%10;
        for(p=1,i=1;i<=n;i++)
            p=p*d;
        sum=sum+p;
    }
    if(sum==a)
        printf("\n %d is an armstrong number",a);
    else
        printf("\n %d is not an armstrong number",a);
}
void check_a_number_is_prime_or_not()
{
    int a,n,i;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    n=1;
    for(i=2;i<=a/2;i++)
    {
        n=a%i;
        if(n==0)
        break;
    }
    if(n!=0)
    printf("\n %d is a prime number",a);
    else
    printf("\n %d is not a prime number",a);
}
void check_a_number_is_strong_or_not()
{
    int a,b,c=1,d,i,sum=0;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    b=a;
    for(;b!=0;b=b/10)
    {
        d=b%10;
        c=1;
        for(i=1;i<=d;i++)
            c=c*i;
        sum=sum+c;
    }
    if(a==sum)
    printf("\n %d is a strong number",a);
    else
    printf("\n %d is not a strong number",a);
}
void fibonacci_squence_from_0_to_n()
{
    int a=0,b=1,c,n;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("%d",a);
    printf("\t %d",b);
    c=a+b;
    while(c<=n)
    {
        printf("\t %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}
void even_fibonacci_squence_from_0_to_n()
{
    int a=0,b=1,c,n;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("%d",a);
    printf("\t %d",b);
    c=a+b;
    while(c<=n)
    {
        if(c%2==0)
        printf("\t %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}
void odd_fibonacci_squence_from_0_to_n()
{
    int a=0,b=1,c,n;
    printf("\n");
    printf("\n Enter the value of n : ");
    scanf("%d",&n);
    printf("%d",a);
    printf("\t %d",b);
    c=a+b;
    while(c<=n)
    {
        if(c%2!=0)
        printf("\t %d",c);
        a=b;
        b=c;
        c=a+b;
    }
}
void function_1()
{
    int i,j,n;
    printf("\n Enter the number of line : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" %d ",j);
        printf("\n");
    }
}
void function_2()
{
    int i,j,n;
    printf("\n Enter the number of line : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            printf("  ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
void function_3()
{
    int i,j,n;
    printf("\n Enter the number of line : ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        printf("%d ", j);
        printf("\n");
    }
}
void function_4()
{
    int i,j,n;
    printf("\n Enter the number of line : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        printf(" * ");
        printf("\n");
    }
}
void function_5()
{
    int i,j,n;
    printf("\n Enter the number of line : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" %d ",i);
        printf("\n");
    }
}
void function_6()
{
    int i,j,r,c;
    printf("\n Enter the number of row : ");
    scanf("%d",&r);
    printf("\n Enter the number of column : ");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        if(i==1||i==r||j==1||j==c)
        printf(" # ");
        else
        printf("   ");
        printf("\n");
    }
}
// void function_7()
// {
//     int i,j,n;
//     printf("\n Enter the number of line : ");
//     scanf("%d",&n);
//     for()
//      {
//      }
// } 