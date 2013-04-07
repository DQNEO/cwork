#include <stdio.h>

extern int a;

int func1() {
    extern char *str;
    
    printf("‚±‚±‚Ísource2.c‚Ìfunc1ŠÖ”\na=%d\n",a);
    printf("str‚àŒ©‚¦‚Ü‚·B---%s\n", str);
    return 0;
}
