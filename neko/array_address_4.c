#include <stdio.h>
/* 配列の要素のアドレスと、配列名のアドレスを表示する */
int main()
{
    int a[5] = {1,2,3,4,5};
    int i;
    int *p;
    p = a;
    for (i=0;i<4;i++) {
        printf("&a[%d] = %p, a[%d] = %d, *(p+%d) = %d\n", i, &a[i], i, a[i], i, *(p+i));
    }

    return 0;
}
