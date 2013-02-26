#include <stdio.h>
/**
 * pointer
 * neko 7-3
 */
main()
{
    int a,b;
    int *p = &a;
    a = 5;
    b = 10;
    printf("a = %d, b = %d, *p = %d\n", a, b, *p);

    p = &b;
    printf("a = %d, b = %d, *p = %d\n", a, b, *p);
}
