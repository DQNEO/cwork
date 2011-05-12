#include <stdio.h>
#include <stdlib.h> /* exit */

int main(int argc, char *argv[])
{

  FILE *fin;
  char s[256];

  if ((fin = fopen(argv[1], "r")) == NULL) {
    printf("cannot open file\n");
    exit(1);
  }

  int current_line = 0;
  while (fgets(s, 256,fin) != NULL) {
    current_line++;

    if (current_line <= 2) {
      continue;
    }
    printf("%s",s);

  }

  fclose(fin);

}
