#include <stdio.h>

typedef struct _TAG_MYDATA {
    char name[32];
    char email[32];
} *LPMYDATA;

main()
{
    LPMYDATA p;

    printf("���Ȃ��̖��O:");
    gets(p->name);

    printf("���Ȃ��̃����A�h:");
    gets(p->email);

    printf("���Ȃ��̏��:{name:%s , email:%s}\n", p->name, p->email);
}
