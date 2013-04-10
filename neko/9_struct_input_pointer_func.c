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
    printf("‚ ‚È‚½‚Ì–¼‘O:");
    gets(lp->name);

    printf("‚ ‚È‚½‚Ìƒƒ‹ƒAƒh:");
    gets(lp->email);

}

int output(LPMYDATA lp)
{
    printf("‚ ‚È‚½‚Ìî•ñ:{name:%s , email:%s}\n", lp->name, lp->email);
}

