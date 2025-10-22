#include<stdio.h>

int main()

{
    int a=4,b=5;

    printf("%d\n",!a);  //非a，a不为零，此处输出布尔值
    printf("%d\n",a&&b);  //a与b
    printf("%d\n",a||b);  //a或b
    printf("%d\n",!a||b);  
    printf("%d\n",4&&(0||2));
    printf("%d\n",5>3&&(2||8)<4-!0);
    printf("%d\n",'c'&&'d');
    printf("%d\n",a>b?a:b);

    return 0;
}