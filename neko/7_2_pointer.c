#include <stdio.h>

/* �A�h���X���i�[���邽�߂̕ϐ����|�C���^�ł��I�I */

main()
{
    int a,b;
    int *p;
    a = 5;
    p = &a;
    b = *p;
    printf("a=%d, b=%d\n", a, b);
}
