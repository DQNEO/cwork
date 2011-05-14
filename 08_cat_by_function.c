#include <stdio.h>
#include <string.h> /* strcpy  */
#include <stdlib.h> /* exit */

/* ２次元配列と関数を利用したcatコマンド */
int main(int argc, char *argv[])
{
  //テキストファイルを行ごとに分割してメモリに記憶させる
  //２次元配列。
  char lines[10][256];
  int line_num;
  line_num = readFile(lines, argv[1]);

  int i;
  for (i = 0;i<=line_num;i++) {
    printf("%s", lines[i]);
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

  return current_line;
}
