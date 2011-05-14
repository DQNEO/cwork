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

  //テキストファイルを行ごとに分割してメモリに記憶させる
  //２次元配列。
  char lines[256][256];

  int current_line = 0;

  while (fgets(lines[current_line++], 256,fin) != NULL) {
  }
  fclose(fin);
  int i;

  int line_num  = current_line;
  int start_lineno = 2;

  //;をのぞいた文のリストを格納する
  char sentences[256][256];
  for (i = start_lineno;i<=line_num;i++) {
    
    int j=0;
    while (lines[i][j]) {
      if (lines[i][j] == ';') {
        //printf("==semicolon==");
        sentences[i][j] = 0;
        break;
    } else {
        //printf("%c", lines[i][j]);
        sentences[i][j] = lines[i][j];
      }
      j++;
    }

  }

  for (i = start_lineno;i<=line_num;i++) {

    //printf("[sentence %d]%s\n", i, sentences[i]);
    char tokens[256][256];

    int j = 0;
    int token_index  = 0;
    int token_i = 0;
    while (sentences[i][j]) {

      //printf("%c", sentences[i][j]);
      if (sentences[i][j] == ' ') {
        token_index++;
        token_i = 0;
      } else {
        tokens[token_index][token_i++] = sentences[i][j];
      }

      //printf("tokens[%d][%d] = %s\n", token_index, j, tokens[token_index]);

      j++;
    }

    printf("line %d\n", i);
    printf("token 0:%s\n", tokens[0]);
    printf("token 1:%s\n", tokens[1]);
  }
  
}


  
