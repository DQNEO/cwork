#include <stdio.h>

int func2()
{
    extern int a;
    extern char *str;
    
    printf("������source3.c��func2�֐��ł��B\na=%d\n",a);
    printf("%s\n", str);
    return 0;
}

char *str = "abc";