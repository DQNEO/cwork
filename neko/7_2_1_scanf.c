#include <stdio.h>
/* scanfに、アドレスを渡して変数を書き換えてもらう */

int main()
{
    int a;
    int *lpa;
    
    lpa = &a;
    
    printf("適当な数値を入力してください---");
    scanf("%d", &a);
    printf("変数aに %d が代入されました。\n", a);
    printf("変数aのアドレスは % pです。\n", lpa);
    printf("変数aを指しているポインタはlpaです。\n");
    printf("*lpaの値は %dです。\n", *lpa);
    
    return 0;
}
