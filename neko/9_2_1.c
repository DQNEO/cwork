#include <stdio.h>
#include <string.h>

/* はじめての構造体 */
struct Man {
    char name[32];
    int age;
};

int main()
{
    struct Man student;
    strcpy(student.name, "山田太郎");
    student.age = 16;
    
    printf("student name :%s\n", student.name);
    printf("sutdent age  :%d\n", student.age);
    
}