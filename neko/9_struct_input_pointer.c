#include <stdio.h>

typedef struct _TAG_MYDATA {
    char name[32];
    char email[32];
} *LPMYDATA;

main()
{
    LPMYDATA p;

    printf("あなたの名前:");
    gets(p->name);

    printf("あなたのメルアド:");
    gets(p->email);

    printf("あなたの情報:{name:%s , email:%s}\n", p->name, p->email);
}
