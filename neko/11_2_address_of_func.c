#include <stdio.h>

int func(int);

int main()
{
    printf("address of main: %p\n", main);
    printf("address of func: %p\n", func);
    return 0;
}

int func(int x)
{
    x += 100;
    printf("%d\n", x);
    return 0;
}
