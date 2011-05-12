#include <stdio.h>
main(int argc, char *argv[])
{

  FILE *fin;
  char s[256];

  fin = fopen(argv[1], "r");

  while( fgets(s, 256,fin) != NULL) {
    printf("%s",s);
  }

  fclose(fin);

}
