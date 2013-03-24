/* 猫でもわかるC言語 */
/* 第9章　構造体  */
#include <stdio.h>
#include <string.h>

/* 構造体の宣言 */
struct Man {
  char name[32];
  int age;
};

int main() {

  /* 構造体の宣言 */
  struct Man student;

  /* 構造体のメンバに値を設定する */
  strcpy(student.name, "Picachu");
  student.age = 16;

  /* 構造体のメンバの値を参照する */
  printf("Student name : %s\n", student.name);
  printf("Student age  : %d\n", student.age);
}

