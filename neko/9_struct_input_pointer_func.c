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
    printf("あなたの名前:");
    gets(lp->name);

    printf("あなたのメルアド:");
    gets(lp->email);

}

int output(LPMYDATA lp)
{
    printf("あなたの情報:{name:%s , email:%s}\n", lp->name, lp->email);
}

