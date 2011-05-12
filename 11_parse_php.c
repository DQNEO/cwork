#include <stdio.h>
#include <string.h> /* strcpy  */
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
  char *lines[256];

  while (fgets(s, 256,fin) != NULL) {
    current_line++;
    lines[current_line] = &s;
  }

  //printf("%s\n", lines[2]);
  

  int i;
  for (i = 1;i<=current_line;i++) {
    //printf("%d: %s\n",i, lines[i]);
  }


  fclose(fin);

}
