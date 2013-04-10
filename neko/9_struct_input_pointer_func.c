#include <stdio.h>

typedef struct _TAG_MYDATA {
    char name[32];
    char email[32];
} *LPMYDATA;

main()
{
    LPMYDATA p;

    printf("‚ ‚È‚½‚Ì–¼‘O:");
    gets(p->name);

    printf("‚ ‚È‚½‚Ìƒƒ‹ƒAƒh:");
    gets(p->email);

    printf("‚ ‚È‚½‚Ìî•ñ:{name:%s , email:%s}\n", p->name, p->email);
}
