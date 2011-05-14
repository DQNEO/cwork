#include        <stdio.h>
#include        <string.h>

int main(void)
{
  /* 解析対象文字列 */
  char string[] = "ABCD ef.1234.G";
  /* スペースと.を区切りとする */
  char delimiter[] = " .";

  char *tp;

  tp = strtok( string, delimiter);
  puts( tp );
  while ( tp != NULL ) {
    tp = strtok( NULL," ." );
    if ( tp != NULL ) {
      puts( tp );
    }
  }
        
  return 0;
}
