/**
 * 氏名と電話番号を入力して構造体にセット・表示するプログラム
 */

#include <stdio.h>

typedef struct _TAG_DATA {
    char name[32];
    char tel[32];
} MYDATA, *LPMYDATA;

main()
{
    LPMYDATA lp;
    
    printf("あなたのお名前は？:");
    gets(lp->name);
    
    printf("あなたの電話番号は？:");
    gets(lp->tel);
    
    printf("氏名：%s\n", lp->name);
    printf("TEL ：%s\n", lp->tel);
    
}

