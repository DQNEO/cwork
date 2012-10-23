#include <stdio.h>
/**
 * swap a b
 * 失敗するケース
 */
void swap(int, int);

main()
{
    int a,b;
    a = 10;
    b = 20;
    swap(a,b);

    printf("a = %d, b = %d\n", a, b);
    return 0;
}

/**
 * C言語ではここが値渡しになるので、
 * これではうまくいかない。
 */
void swap(int a, int b)
{
    int tmp;
    tmp = b;
    b = a;
    a = tmp;
    return;
}
