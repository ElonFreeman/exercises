#include<stdio.h>

int main()
{   
    int x,y,z;

    x=y=z=3;

    y=x++-1;printf("%4d%4d\n",x,y);
    y=++x-1;printf("%4d%4d\n",x,y);
    y=z--+1;printf("%4d%4d\n",z,y);
    y=--z+1;printf("%4d%4d\n",z,y);



    getchar();
    return 0;
}