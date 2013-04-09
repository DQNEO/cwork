#include <stdio.h>

/* 構造体をコピーする */

int main()
{
    struct DATA {
        int x;
        int y;
    } a = {10,20},b;
    
    //copy
    b = a;
    
    printf("a.x = %d, b.x = %d\n", a.x, b.x);
    
    //aとbが別々のインスタンスであることを確認
    b.x = 100;
    
    printf("a.x = %d, b.x = %d\n", a.x, b.x);
    
    //aとbのアドレスが異なることを確認
    printf("address a is %p\n", &a);
    printf("address b is %p\n", &b);
}
