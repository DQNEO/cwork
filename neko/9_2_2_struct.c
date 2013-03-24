#include <stdio.h>

/* 構造体を宣言 */
struct DATA {
  int  data1;
  int  data2;
  char data3;
  char data4[32];  
};

int main() {
  /* 宣言すると同時に初期化 */
  struct DATA mydata = {10, 20, 'A',  "cat"};
  printf("%d, %d, %c, %s\n",
	 mydata.data1, mydata.data2, mydata.data3, mydata.data4);
  return 0;
}


