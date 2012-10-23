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
    printf("p = %d\n", (int)p);
    printf("*p = %d\n", *p);
}

