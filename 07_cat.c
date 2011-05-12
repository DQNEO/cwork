#include <stdio.h>
#include <stdlib.h> /* exit */
main(int argc, char *argv[])
{

  FILE *fin;
  char s[256];

  if ((fin = fopen(argv[1], "r")) == NULL) {
    printf("cannot open file\n");
    exit(1);
  }

  while (fgets(s, 256,fin) != NULL) {
    printf("%s",s);
  }

  fclose(fin);

}
