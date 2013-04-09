#include <stdio.h>

/* 構造体を宣言 */
struct DATA {
    int data1;
    char data2;
    char data3[32];
};

int main()
{
    /* インスタンス宣言と同時に初期化 */
    struct DATA mydata = {10, 'A', "cat"};
    printf("%d, %c, %s\n",
        mydata.data1, mydata.data2, mydata.data3);
}

