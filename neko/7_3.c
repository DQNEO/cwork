#include <stdio.h>

/* *paに値を代入することができることを示すサンプル */

int main()
{
    int *pa;
    int a;
    
    pa = &a;
    *pa = 5;

    printf("*pa = %d\n", *pa);
    printf("a = %d\n", a);
    
    return 0;
}
