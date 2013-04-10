#include <stdio.h>
/**
 * 足し算プログラム
 * ユーザ入力値を合計して返す。
 */

int wa(int, int);

main()
{
    char input[10];
    int i1,i2;

    gets(input);

    i1 = atoi(input);
    printf("i1 = %d\n", i1);

    gets(input);

    i2 = atoi(input);
    printf("i2 = %d\n", i2);
    
    printf("wa = %d\n", wa(i1, i2));
}

int wa(int x, int y)
{
    return x + y;
}

