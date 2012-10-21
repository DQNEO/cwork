#include <stdio.h>
/**
 *   文字列の配列を扱うサンプルコード
 */
main()
{
    /* 文字列の配列を初期化 */
    /* 20ってのがちょっとダサイので何とかしたい */
    char Meibo[5][20] = {"apple", "mango", "orange"} ;

    printf("%s\n", &Meibo[0][0]);
    printf("%s\n", &Meibo[1][0]);
    printf("%s\n", &Meibo[2][0]);

    printf("\n");
    //下記のように書いても同じである。
    printf("%s\n", Meibo[0]);
    printf("%s\n", Meibo[1]);
    printf("%s\n", Meibo[2]);
}
