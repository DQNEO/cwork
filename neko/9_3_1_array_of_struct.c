#include <stdio.h>

struct STUDENT {
  char name[32];
  int eigo;
  int sugaku;
};

#define STUDENT_LEN 4
int main() {
  struct STUDENT students[STUDENT_LEN] = {
    "田中", 80, 70,
    "山田", 81, 71,
    "佐藤", 82, 72,
    "鈴木", 83, 73,
  };

  printf("student name eigo sugaku\n");
  int i = 0;
  for (i=0;i<STUDENT_LEN;i++) {
    printf("%s %d %d\n", students[i].name, students[i].eigo, students[i].sugaku);
  }
  return 0;
}

