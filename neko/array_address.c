#include <stdio.h>
/* 配列の要素のアドレスと、配列名のアドレスを表示する */
int main()
{
    int a[5] = {1,2,3,4,5};
    int i = 0;
    for (i=0;i<4;i++) {
        printf("address : %p\n", &a[i]);
    }

    printf("address a is %p\n", a);
    return 0;
}
