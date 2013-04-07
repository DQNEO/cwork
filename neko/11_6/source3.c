#include <stdio.h>

int func2()
{
    extern int a;
    extern char *str;
    
    printf("‚±‚±‚Ísource3.c‚Ìfunc2ŠÖ”‚Å‚·B\na=%d\n",a);
    printf("%s\n", str);
    return 0;
}

char *str = "abc";