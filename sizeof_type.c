/**
 * http://www.geocities.jp/gakaibon/gcc/tips/sizeof_type_01.html
 * sizeof char, short, int, long, long long
 *
 *      $ gcc -Wall sizeof_type_01.c -o sizeof_type_01
 *      $ ./sizeof_type_01
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
  unsigned int sizeof_char      = sizeof(char);
  unsigned int sizeof_short     = sizeof(short);
  unsigned int sizeof_int       = sizeof(int);
  unsigned int sizeof_long      = sizeof(long);
  unsigned int sizeof_long_long = sizeof(long long);

  printf("sizeof char      : %u byte (%3u bit )\n", sizeof_char,  sizeof_char  * 8);
  printf("sizeof short     : %u byte (%3u bit )\n", sizeof_short, sizeof_short * 8);
  printf("sizeof int       : %u byte (%3u bit )\n", sizeof_int,   sizeof_int   * 8);
  printf("sizeof long      : %u byte (%3u bit )\n", sizeof_long,  sizeof_long  * 8);
  printf("sizeof long long : %u byte (%3u bit )\n", sizeof_long_long, sizeof_long_long * 8);

  return 0;
}
