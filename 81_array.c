#include <stdio.h>

main()
{
  int a[4];
  a[0] = 1;
  a[1] = 2;
  a[2] = 100;
  a[3] = 5;
  
  int b[4] = {1 ,2, 100, 50};
  int c[]  = {1, 2, 100, 50};
  int d[4]  = {1, 2,}; // { 1, 2, 0, 0} と等価

  int i;
  for (i=0;i<4;i++) {
    printf("a[%d]=%d\n", i, a[i] );
  }

  for (i=0;i<4;i++) {
    printf("b[%d]=%d\n", i, b[i] );
  }

  for (i=0;i<4;i++) {
    printf("c[%d]=%d\n", i, c[i] );
  }

  for (i=0;i<4;i++) {
    printf("d[%d]=%d\n", i, d[i] );
  }


}
