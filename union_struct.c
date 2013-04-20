/**
 * show what is different struct and union  
 */
#include <stdio.h>

typedef struct _TAG_STRCT {
  int i1;
  int i2;
  double d1;
  double d2;
} mystruct;

typedef union _TAG_UNION {
  int i1;
  int i2;
  double d1;
  double d2;
} myunion;

int main()
{
  mystruct s;
  myunion  u;

  printf("address s.i1 = %p\n", &(s.i1));
  printf("address s.i2 = %p\n", &(s.i2));
  printf("address s.d1 = %p\n", &(s.d1));
  printf("address s.d2 = %p\n", &(s.d2));

  printf("address u.i1 = %p\n", &(u.i1));
  printf("address u.i2 = %p\n", &(u.i2));
  printf("address u.d1 = %p\n", &(u.d1));
  printf("address u.d2 = %p\n", &(u.d2));
  
}
