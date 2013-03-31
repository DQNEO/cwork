/** 
 * pointerの初歩
 * 変数のアドレスを表示して、
 * アドレス値の差分に着目することで、
 * 変数が占有するバイト数を推定することができる。
 *
 */
#include <stdio.h>

main() {
  char   c1,c2,c3;
  int    i1,i2,i3;
  double d1,d2,d3;

  printf("c1 address is %p\n", &c1); 
  printf("c2 address is %p\n", &c2); 
  printf("c3 address is %p\n", &c3); // 1バイト消費
  printf("i1 address is %p\n", &i1);  
  printf("i2 address is %p\n", &i2); 
  printf("i3 address is %p\n", &i3); // 4バイト消費
  printf("d1 address is %p\n", &d1);  
  printf("d2 address is %p\n", &d2); 
  printf("d3 address is %p\n", &d3); // 8バイト消費
  
}
