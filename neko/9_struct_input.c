#include <stdio.h>

typedef struct _TAG_MYDATA {
    char name[32];
    char email[32];
} MYDATA;

main()
{
    MYDATA data;

    printf("あなたの名前は？:");
    gets(data.name);

    printf("あなたのメルアドは？:");
    gets(data.email);
    

    printf("あなたの情報:{name:%s, email：%s}\n", data.name, data.email);

}

