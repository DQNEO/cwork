#include <stdio.h>

/**
 * �E�|�C���^������������Ɠ����ɃA�h���X��ݒ肷��
 * �E�|�C���^���w������ォ��ύX����
 */
int main()
{
    int a,b;
    int *p = &a;
    
    a = 5;
    b = 10;
    
    printf("a=%d, b=%d, *p=%d \n", a, b, *p);
    
    p = &b;
    
    printf("a=%d, b=%d, *p=%d \n", a, b, *p);

}
