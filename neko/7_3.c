#include <stdio.h>

/* *pa�ɒl�������邱�Ƃ��ł��邱�Ƃ������T���v�� */

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
