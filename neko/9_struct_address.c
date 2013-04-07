#include <stdio.h>
/* 構造体がメモリ上にどう配置されているか気になったので調べてみた */

struct DATA {
    int i1;
    int i2;
    int i3;
    char c1;
    char c2;
    char c3;
    double d1;
    double d2;
    double d3;
};

int main()
{
    struct DATA mydata;
    printf("address of i1 is %p\n", &(mydata.i1));
    printf("address of i2 is %p\n", &(mydata.i2));
    printf("address of i3 is %p\n", &(mydata.i3));
    printf("address of c1 is %p\n", &(mydata.c1));
    printf("address of c2 is %p\n", &(mydata.c2));
    printf("address of c3 is %p\n", &(mydata.c3));
    printf("address of d1 is %p\n", &(mydata.d1));
    printf("address of d2 is %p\n", &(mydata.d2));
    printf("address of d3 is %p\n", &(mydata.d3));
    
    printf("address of mydata is %p\n", &mydata);
    
}

