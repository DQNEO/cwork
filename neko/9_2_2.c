#include <stdio.h>

/* �\���̂�錾 */
struct DATA {
    int data1;
    char data2;
    char data3[32];
};

int main()
{
    /* �C���X�^���X�錾�Ɠ����ɏ����� */
    struct DATA mydata = {10, 'A', "cat"};
    printf("%d, %c, %s\n",
        mydata.data1, mydata.data2, mydata.data3);
}

