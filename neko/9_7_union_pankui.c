#include <stdio.h>
#include <string.h>

#define NO 6
#define PAN  "パンくい"
#define TOKYO "徒競走"

typedef struct _TAG_MYDATA {
  char name[32];
  char kyogi[32];
  union  {
    double time;
    int rank;
  } seiseki;
} MYDATA, *LPMYDATA;

int myinput(LPMYDATA, char *, char*, double);

int main()
{
  MYDATA data[NO];
  LPMYDATA lp = data;
  int i;
  myinput(lp,   "田中", PAN, 1);
  myinput(lp+1, "山田", TOKYO, 10.3);
  myinput(lp+2, "鈴木", PAN, 5);
  myinput(lp+3, "佐藤", TOKYO, 7.7);
  myinput(lp+4, "ほげ", PAN, 6);
  myinput(lp+5, "ふが", TOKYO, 8.8);

  for(i=0;i<NO;i++) {
    if (strcmp(data[i].kyogi, PAN) == 0) {
      printf("%4s %-14s %4d\n", data[i].name, data[i].kyogi, data[i].seiseki.rank);
    } else {
      printf("%4s %-14s %4.1f\n", data[i].name, data[i].kyogi, data[i].seiseki.time);
    }
  }

  
}

int myinput(LPMYDATA p, char *name, char *kyogi, double point)
{
  strcpy(p->name, name);
  strcpy(p->kyogi, kyogi);
  if (strcmp(p->kyogi, PAN) == 0) {
    p->seiseki.rank = (int)point;    
  } else {
    p->seiseki.time = point;    
  }


  return 0;
}
