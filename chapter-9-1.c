#include <stdio.h>

main()
{
  int a,b;
  int *p;

  a = 123;
  p = &a;
  b = *p;

  printf("\n現在ポインタpは変数aのアドレスを示している\n");
  printf("a=%d b=%d *p=%d\n", a, b, *p);

  a = 200;
  b = 300;
  printf("\n現在ポインタpは変数aのアドレスを示している\n");
  printf("a=%d b=%d *p=%d\n", a, b, *p);

  p = &b;
  printf("\n現在ポインタpは変数bのアドレスを示している\n");
  printf("a=%d b=%d *p=%d\n", a, b, *p);
  
}
