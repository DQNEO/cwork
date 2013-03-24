#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *str;
  int size = 100;

  str = (char *)malloc(size);
  if(str == NULL) {
    printf("cannot malloc\n");
    exit(1);
  }
  
  gets(str);
  puts(str);

  free(str);

  return 0;
}
