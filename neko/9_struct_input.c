#include <stdio.h>

typedef struct _TAG_MYDATA {
    char name[32];
    char email[32];
} MYDATA;

main()
{
    MYDATA data;

    printf("���Ȃ��̖��O:");
    gets(data.name);

    printf("���Ȃ��̃����A�h:");
    gets(data.email);
    
    printf("���Ȃ��̏��:{name:%s, email�F%s}\n", data.name, data.email);

}
