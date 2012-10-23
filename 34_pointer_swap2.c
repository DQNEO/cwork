#include <stdio.h>
/**
 * swap a b
 * 正しいコード
 */
void swap(int *, int *);

main()
{
    int a,b;
    a = 10;
    b = 20;
    swap(&a,&b);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}

/**
 * C言語では値渡ししかできないので、
 * アドレスを値渡しすることで参照渡しを実現する
 */
void swap(int *a, int *b)
{
    int tmp;
    tmp = *b;
    *b = *a;
    *a = tmp;
    return;
}
