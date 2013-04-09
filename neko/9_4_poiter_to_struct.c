#include <stdio.h>

struct Data {
    char name[32];
    int age;
    int bl;
    int bw;
    double bmi;
};


int struct_input(struct Data *);

main()
{
    struct Data MyData;
    char format[] = "%s さん(%d 歳)のプロフィール\n"
     "身長 = %d cm, 体重 = %d kg, BMI=%f \n";
     
    char buffer[512] = "a";
    
    struct_input(&MyData);
    
    sprintf(buffer, format, 
        MyData.name, MyData.age,
        MyData.bl, MyData.bw, MyData.bmi);
    
    printf(buffer);
    
}

int struct_input(struct Data *p)
{
    printf("氏名---");
    gets(p->name);
    printf("年齢---");
    scanf("%d", &(p->age));
    printf("身長(cm)---");
    scanf("%d", &(p->bl));
    printf("体重(kg)--");
    scanf("%d", &(p->bw));
    p->bmi =  p->bw * 10000 / (p->bl * p->bl);

    return 0;
}

