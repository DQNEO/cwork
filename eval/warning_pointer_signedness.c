/**
 * gccのwarningを再現するテスト
 *
 * このコードを-Wallつきでコンパイルすると警告が出る
 * $ gcc -Wall warning_pointer_signedness.c
 * warning_pointer_signedness.c: In function ‘main’:
 * nwarning_pointer_signedness.c:9: 警告: pointer targets in assignment differ in signedness
 * warning_pointer_signedness.c:9: 警告: ‘uip’ is used uninitialized in this function
 *
 * thanks: http://www.d4.dion.ne.jp/~sh_okada/kinkyou2007.html
 * 
 * 
 */
#include <stdio.h>

int main()
{
    int *ip;
    unsigned int *uip;
    
    ip = uip;
    
    return 0;
}
