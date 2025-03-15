#include<stdio.h>
struct complex
{
    int a;
    int b;
};
struct complex add_complex(struct complex c1,struct complex c2);
int main()
{
    struct complex c1,c2,sum;
    printf("\n Enter real and imaginary number of first complex number : ");
    scanf("%d%d",&c1.a,&c1.b);
    printf("\n Enter real and imaginary number of second complex number : ");
    scanf("%d%d",&c2.a,&c2.b);
    sum=add_complex(c1,c2);
    printf("\n sum of two complex number : %d + %di",sum.a,sum.b);
}
struct complex add_complex(struct complex c1,struct complex c2)
{
    struct complex result;
    result.a=c1.a+c2.a;
    result.b=c1.b+c2.b;
    return result;
}