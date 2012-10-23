#include <stdio.h>
/**
 * pointer
 */
main()
{
    int a;
    a = 7;
    printf("a=%d\n",a);

    int *p;
    p = &a;
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    a = 8;
    printf("*p = %d\n", *p);

    *p = 9;
    printf(" a = %d\n", a);
}

