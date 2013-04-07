/* 構造体の配列 */

#define STUDENTNO 5
#define SUBJECTNO 3

#include <stdio.h>

int drawline(void);

struct SEISEKI {
    char name[32];
    int kokugo;
    int sugaku;
    int eigo;
};

int main()
{
    //構造体の配列を定義
    struct SEISEKI students[STUDENTNO] = {
        {"田中", 80,80,55},
        {"佐藤", 75,90,70},
        {"大田", 50,45,30},
        //下記のように{}なしでもOK
        "鈴木", 100,55,90,
        "加藤", 60,85,35
        };
        
   int i,total_sum = 0,person_total[STUDENTNO];
   int kokugo_sum = 0,sugaku_sum = 0, eigo_sum = 0; 
   
   
   //個人の総合点を初期化
   for(i = 0; i < STUDENTNO; i++) {
     person_total[i] = 0;
   }
     
   for(i = 0; i < STUDENTNO; i++) {
     kokugo_sum += students[i].kokugo;
     sugaku_sum += students[i].sugaku;
     eigo_sum += students[i].eigo;
   }
   
   for (i = 0; i < STUDENTNO; i++) {
     person_total[i] = students[i].kokugo + students[i].sugaku + students[i].eigo;
   }
     
   for (i = 0; i < STUDENTNO; i++) {
     total_sum += person_total[i];
   }
   
   printf("****** 成績 *****\n\n");
   
   printf("%6s %6s %6s %6s %6s\n",
     "氏名", "国語", "数学", "英語", "合計");
   drawline();
   
   for (i = 0; i < STUDENTNO; i++) {
     printf("%6s %6d %6d %6d %6d\n",
       students[i].name, students[i].kokugo,
       students[i].sugaku, students[i].eigo, person_total[i]);
   }
   drawline();
   
   printf("%6s, %6.1f, %6.1f %6.1f %6.1f\n",
     "平均",
    (double) kokugo_sum / STUDENTNO,
    (double) sugaku_sum / STUDENTNO,
    (double) eigo_sum / STUDENTNO,
    (double)total_sum / STUDENTNO);
   
   return 0;
   
}

int drawline(void)
{
    int i;
    for (i = 0; i < 35; i++) {
        printf("-");
    }
    printf("\n");
    return 0;
}

