/**
 * 未定義のint型変数を表示するとどうなるか
 *
 * やってみたら、-1216989264みたいな数字が表示される。
 * 実行されるたびに値は変わる。
 */
#include <stdio.h>

main() {
  int i;
  printf("%d\n", i);
}
