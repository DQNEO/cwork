#include <stdio.h>

extern int a;

int func1() {
    extern char *str;
    
    printf("������source2.c��func1�֐�\na=%d\n",a);
    printf("str�������܂��B---%s\n", str);
    return 0;
}
