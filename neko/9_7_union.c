#include <stdio.h>

union myunion {
  int i;
  char c;
  double d;
  char *str;
};

int main()
{
  union myunion m;

  m.i = 100;
  printf("m.i = %d\n", m.i);

  m.c = 'A';
  printf("m.c = %c\n", m.c);

  m.d = 7.77;
  printf("m.d = %f\n", m.d);

  m.str = "Hello!";
  printf("m.str = %s\n", m.str);
  
  return 0;
}
