#include <stdio.h>

/* swap�֐����������悤�Ƃ��āA�l�n���ɂ�������Ă��܂������Ȃ���B */

void swap(int, int);

int main()
{
    int a,b;
    a = 10;
    b = 20;
    
    swap(a, b);
    
    printf("a=%d b=%d \n", a, b);
    
}

void swap(int a, int b)
{
    int c;
    
    c = b;
    b = a;
    a = c;
    return;
}

