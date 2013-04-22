#include <stdio.h>
/* a[2], *(a+2), 2[a]が等価であることを新セス。配列の要素のアドレスと、配列名のアドレスを表示する */
int main()
{
    int a[3] = {0,10,20};

    printf("a[2] = %d\n", a[2]);
    printf("a[2] = %d\n", *(a+2));
    printf("a[2] = %d\n", 2[a]);

    return 0;
}
