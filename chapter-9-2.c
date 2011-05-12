/* 文字列をポインタで処理する */
#include <stdio.h>
#include <string.h> /* strcpy */

main()
{
  char ss[10];
  char *p;

  strcpy(ss, "ABCDE");
  p = ss;
  printf("----test 1\n");
  printf("ss=%s p=%s\n", ss, p);

  printf("----test 2\n");
  putchar(*p);
  putchar(*(p+1));
  putchar(*(p+2));
  putchar('\n');

  printf("----teset 3\n");
  *p='X';
  *(p+1) = 'Y';
  printf("ss=%s\n", ss);

  printf("----teset 4\n");
  while(*p) {
    *p=*p+1;
    ++p;
  }

  printf("ss=%s\n", ss);
}

