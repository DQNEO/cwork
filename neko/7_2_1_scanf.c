#include <stdio.h>
/* scanf�ɁA�A�h���X��n���ĕϐ������������Ă��炤 */

int main()
{
    int a;
    int *lpa;
    
    lpa = &a;
    
    printf("�K���Ȑ��l����͂��Ă�������---");
    scanf("%d", &a);
    printf("�ϐ�a�� %d ���������܂����B\n", a);
    printf("�ϐ�a�̃A�h���X�� % p�ł��B\n", lpa);
    printf("�ϐ�a���w���Ă���|�C���^��lpa�ł��B\n");
    printf("*lpa�̒l�� %d�ł��B\n", *lpa);
    
    return 0;
}
