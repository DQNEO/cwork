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
    char format[] = "%s ����(%d ��)�̃v���t�B�[��\n"
     "�g�� = %d cm, �̏d = %d kg, BMI=%f \n";
     
    char buffer[512] = "a";
    
    struct_input(&MyData);
    
    sprintf(buffer, format, 
        MyData.name, MyData.age,
        MyData.bl, MyData.bw, MyData.bmi);
    
    printf(buffer);
    
}

int struct_input(struct Data *p)
{
    printf("����---");
    gets(p->name);
    printf("�N��---");
    scanf("%d", &(p->age));
    printf("�g��(cm)---");
    scanf("%d", &(p->bl));
    printf("�̏d(kg)--");
    scanf("%d", &(p->bw));
    p->bmi =  p->bw * 10000 / (p->bl * p->bl);

    return 0;
}

