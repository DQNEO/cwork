#include <stdio.h>

/* アドレスを格納するための変数がポインタです！！ */

main()
{
    int a,b;
    int *p;
    a = 5;
    p = &a;
    b = *p;
    printf("a=%d, b=%d\n", a, b);
}
