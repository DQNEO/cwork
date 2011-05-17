#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>

int main(int argc, char* argv[])
{
  char lines[10][256];
  int line_num;
  line_num = readFile(lines, argv[1]);

  int i;

  char string[256];

  int startline = 2;
  for (i = startline;i<=line_num;i++) {
    strcpy(string, lines[i]);

    char tokens[10][256];
    get_tokens_from_string(tokens, string);

    if (strcmp(tokens[0], "echo") == 0) {

      char echo_string[256] = "";
      int j;
      for(j=1; j<strlen(tokens[1]) -1 ; j++) {
        echo_string[j-1] = tokens[1][j];
        //printf("%c", echo_string[j-1]);
      }
      echo_string[j] = 0;

      printf("%s\n", echo_string);
    }

  }

  printf("\n");
}

int get_tokens_from_string(char tokens[][256], char line[])
{

  /* スペースと.を区切りとする */
  char delimiter[] = " ;";
  char *tp;

  char tmp[256];
  int i = 0;
  tp = strtok( line, delimiter);

  if (tp == NULL) {
    return;
  }
  strcpy(tokens[i], tp);

  while ( tp != NULL ) {
    tp = strtok( NULL, delimiter );
    if ( tp != NULL ) {
      strcpy(tokens[++i], tp );
    }
  }

}

int readFile (char lines[][256], char filename[])
{
  FILE *fin;
  if ((fin = fopen(filename, "r")) == NULL) {
    printf("cannot open file\n");
    exit(1);
  }

  int current_line = 0;

  while (fgets(lines[current_line], 256,fin) != NULL) {
    current_line++;
  }
  fclose(fin);

  return current_line - 1;
}
