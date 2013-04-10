#include <stdio.h>
/**
 * このプログラムは簡単にクラッシュします。
 * Linuxだと4文字、Windowsだと16文字ほど入力すると
 * クラッシュします。
 */
main()
{
    char input[4];
    gets(input);
    printf("%s\n", input);
}

