#include <stdio.h>

/* �w���斢��̃|�C���^�ɒl��������Ƃǂ��Ȃ邩������ */
/* MinGW�ł́A�s��|�C���^�ɒl���������炢�����B
 * ���NULL�|�C���^�ɒl����������N���b�V�������B
 */
int main()
{
    int *pa;
    *pa = 5;

    //���̒i�K�ł́A���ʂ�5����������B
    printf("address of pa = %p\n", pa);
    printf("*pa = %d\n", *pa);

    pa = NULL;

    printf("address of pa = %p\n", pa); // 00000000
    *pa = 5;   // �N���b�V���I�I
    printf("*pa = %d\n", *pa);

    
    return 0;
}
