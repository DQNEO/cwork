#include <stdio.h>

/* 指す先未定のポインタに値を代入するとどうなるかを実験 */
/* MinGWでは、不定ポインタに値を代入したらいけた。
 * 一方NULLポインタに値を代入したらクラッシュした。
 */
int main()
{
    int *pa;
    *pa = 5;

    //この段階では、普通に5が代入される。
    printf("address of pa = %p\n", pa);
    printf("*pa = %d\n", *pa);

    pa = NULL;

    printf("address of pa = %p\n", pa); // 00000000
    *pa = 5;   // クラッシュ！！
    printf("*pa = %d\n", *pa);

    
    return 0;
}
