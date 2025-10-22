#include<stdio.h>

int main()
{
    char a='a',b='b',c='c';
    int d;
    

    (int)a,b,c;  //强制格式转换，但这里没有也可以，因为会触发自动转换
    d=a+b+c;

    printf("%d",d);

    return 0;
}