#include <stdio.h>
#include <string.h>
struct Person {
  char name[32];
  int age;
  int height;
  int weight;
  double bmi;
};

int struct_input(struct Person *);

int main() {
  struct Person psn;
  char format[] = "%s さん(%d才)のプロフィール\n"
  "身長 = %dcm, 体重 = %dkg, BMI = %4.1f\n";
  char buffer[256];

  struct_input(&psn);

  sprintf(buffer, format,
	  psn.name, psn.age, psn.height, psn.weight, psn.bmi);
  printf(buffer);
}

int struct_input(struct Person *p) {
  printf("氏名=");
  gets(p->name);
  printf("年齢=");
  scanf("%d", &(p->age));
  printf("身長=");
  scanf("%d", &(p->height));
  printf("体重=");
  scanf("%d", &(p->weight));
  p->bmi = p->weight * 10000 / (p->height * p->height);
}
