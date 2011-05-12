#include <stdio.h>
#include <string.h> /* strcpy  */
#include <stdlib.h> /* exit */

int main(int argc, char *argv[])
{

  FILE *fin;
  if ((fin = fopen(argv[1], "r")) == NULL) {
    printf("cannot open file\n");
    exit(1);
  }

  char lines[256][256];

  int current_line = 0;

  while (fgets(lines[current_line++], 256,fin) != NULL) {
  }
  fclose(fin);
  int i;

  int line_num  = 3;
  for (i = 2;i<=line_num;i++) {
    printf("%s", lines[i]);
  }

}


  
