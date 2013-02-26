#include <stdio.h>
/**
 * pointer
 * neko 7-3
 */
main()
{
    int *pa;
    int a;
    pa = &a;
    *pa = 5;

    printf("*pa = %d\n", *pa);
    printf("  a = %d\n", a);

    printf("  p = %p\n", pa);
    printf(" &a = %p\n", &a);
}
