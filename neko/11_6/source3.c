#include <stdio.h>

int func2()
{
    extern int a;
    extern char *str;
    
    printf("ここはsource3.cのfunc2関数です。\na=%d\n",a);
    printf("%s\n", str);
    return 0;
}

char *str = "abc";