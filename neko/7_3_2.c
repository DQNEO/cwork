#include <stdio.h>

/**
 * ・ポインタを初期化すると同時にアドレスを設定する
 * ・ポインタが指す先を後から変更する
 */
int main()
{
    int a,b;
    int *p = &a;
    
    a = 5;
    b = 10;
    
    printf("a=%d, b=%d, *p=%d \n", a, b, *p);
    
    p = &b;
    
    printf("a=%d, b=%d, *p=%d \n", a, b, *p);

}
