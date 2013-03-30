/*
 * システムコールを直接叩いて
 * 標準エラー出力に出力するプログラム
 */
#include <stdio.h>

main()
{
  write(2,"hello error\n", 12);
}
