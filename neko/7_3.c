#include <stdio.h>

/* *pa‚É’l‚ð‘ã“ü‚·‚é‚±‚Æ‚ª‚Å‚«‚é‚±‚Æ‚ðŽ¦‚·ƒTƒ“ƒvƒ‹ */

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
