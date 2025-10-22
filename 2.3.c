#include<stdio.h>

int main(void)
{
    int a,
        b,
        c,
        d,
        e;

    a=1;
    b=2;
    c=3;
    d=4;
    e=a+b+c+d;

    printf("%d %d %d \n",a+b,b+c,a+d);
    printf("%d\n",e);
    printf("%d\n",(a,b));

    return 0;
}