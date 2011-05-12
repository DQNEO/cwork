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
  char sentence[256];

  while (fgets(s, 256,fin) != NULL) {
    current_line++;

    if (current_line <= 2) {
      continue;
    }

    int cursor = 0;
    char c;
    char sentence[256];
    while (s[cursor] != ';' ) {
      sentence[cursor] = s[cursor];
      //printf("%c", sentence[cursor]);
      cursor++;
    }
    sentence[cursor] = 0;

    printf("%s\n", sentence);
  }


  fclose(fin);

}
