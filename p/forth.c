#include<stdio.h>
struct complex{
    int a;
    int b;
};
struct complex addNumber(struct complex c1,struct complex c2);
int main()
{
    struct complex c1,c2,add;
    printf("\n Enter real and imganary number of the first complex number : ");
    scanf("%d%d",&c1.a,&c1.b);
    printf("\n Enter real and imganary number of the second complex number : ");
    scanf("%d%d",&c2.a,&c2.b);
    add=addNumber(c1,c2);
    printf("\n sum of two complex number : %d + %di",add.a,add.b);
}

struct complex addNumber(struct complex c1,struct complex c2)
{
    struct complex temp;
    temp.a=c1.a+c2.a;
    temp.b=c1.b+c2.b;
    return temp;
}