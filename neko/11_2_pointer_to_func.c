#include <stdio.h>

int func(int);

int main()
{

    int (*p1)();
    int (*p2)();
    p1 = main;
    p2 = func;

    printf("address of main: %p\n", main);
    printf("address of p1  : %p\n", p1);

    printf("address of func: %p\n", func);
    printf("address of p2  : %p\n", p2);

    return 0;
}

int func(int x)
{
    x += 100;
    printf("%d\n", x);
    return 0;
}
