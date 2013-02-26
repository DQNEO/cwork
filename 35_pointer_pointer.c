#include <stdio.h>

main()
{
  int a;
  int *p;
  int **pp;
  
  p = &a;
  pp = &p;
  **pp  = 10;
  printf("a = %d, p = %d, pp = %d\n", a, *p, **pp);
  return 0;
}
