#include <stdio.h>

/* �\���̂��R�s�[���� */

int main()
{
    struct DATA {
        int x;
        int y;
    } a = {10,20},b;
    
    //copy
    b = a;
    
    printf("a.x = %d, b.x = %d\n", a.x, b.x);
    
    //a��b���ʁX�̃C���X�^���X�ł��邱�Ƃ��m�F
    b.x = 100;
    
    printf("a.x = %d, b.x = %d\n", a.x, b.x);
    
    //a��b�̃A�h���X���قȂ邱�Ƃ��m�F
    printf("address a is %p\n", &a);
    printf("address b is %p\n", &b);
}
