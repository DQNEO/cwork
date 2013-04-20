#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10000
static char allocbuf[BUFFER_SIZE];
static char *curp = allocbuf;
char *alloc(int);
void afree(char *);

char *alloc(int n)
{
    if (curp + n >  allocbuf + BUFFER_SIZE) {
        return NULL;
    }

    char *oldp = curp;
    curp += n;
    return oldp;
}

void afree(char *p)
{
    if (allocbuf <= p && p < allocbuf + BUFFER_SIZE ) {
        curp = p;
    }
}

/* ここまでが、K&Rに載っていたサンプルコード */

/* ここから下が、それを利用するstackの実装 */

static char *plist[10];
static int cur_index = 0;

int push(char *p)
{
    char *lp = alloc(strlen(p) + 1);
    plist[cur_index++] = lp;
    strcpy(lp, p);
    printf("[push] %s\n", lp);
    return 1;
}

char *pop()
{
    afree(plist[--cur_index]);
    printf("[pop ] %s\n", plist[cur_index]);
    return plist[cur_index];
}

int main()
{
    push("a");
    push("bc");
    push("def");

    pop();
    pop();

    push("xyz");
    pop();
    pop();

    return 0;
}

