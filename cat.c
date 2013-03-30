/**
 * C言語によるcat実装
 * (標準入力を読み込んでprintするだけ)
 */
#include <stdio.h>
#include <string.h>

main()
{
  //BUFSIZはstdio.hで定義されている。
  char string[BUFSIZ];

  while(fgets(string, BUFSIZ, stdin) != NULL) {
    printf("%s", string);
  }

}
