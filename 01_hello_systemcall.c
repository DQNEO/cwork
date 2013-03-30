/*
 * システムコールを直接叩いて
 * 標準出力に出力するプログラム
 */
#include <stdio.h>

main()
{
  write(1,"hello world\n", 12);
}
