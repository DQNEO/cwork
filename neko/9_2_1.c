#include <stdio.h>
#include <string.h>

/* �͂��߂Ă̍\���� */
struct Man {
    char name[32];
    int age;
};

int main()
{
    struct Man student;
    strcpy(student.name, "�R�c���Y");
    student.age = 16;
    
    printf("student name :%s\n", student.name);
    printf("sutdent age  :%d\n", student.age);
    
}