/**
 * �����Ɠd�b�ԍ�����͂��č\���̂ɃZ�b�g�E�\������v���O����
 */

#include <stdio.h>

typedef struct _TAG_DATA {
    char name[32];
    char tel[32];
} MYDATA, *LPMYDATA;

main()
{
    LPMYDATA lp;
    
    printf("���Ȃ��̂����O�́H:");
    gets(lp->name);
    
    printf("���Ȃ��̓d�b�ԍ��́H:");
    gets(lp->tel);
    
    printf("�����F%s\n", lp->name);
    printf("TEL �F%s\n", lp->tel);
    
}

