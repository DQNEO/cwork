#include <stdio.h>

typedef struct _TAG_MYDATA {
    char name[32];
    char email[32];
} *LPMYDATA;


int input(LPMYDATA);
int output(LPMYDATA);

main()
{
    LPMYDATA p;
    input(p);
    output(p);
}


int input(LPMYDATA lp)
{
    printf("���Ȃ��̖��O:");
    gets(lp->name);

    printf("���Ȃ��̃����A�h:");
    gets(lp->email);

}

int output(LPMYDATA lp)
{
    printf("���Ȃ��̏��:{name:%s , email:%s}\n", lp->name, lp->email);
}

