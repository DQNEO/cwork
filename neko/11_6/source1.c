#include <stdio.h>

int func1();
int func2();

int a = 100;

int main()
{
    extern char *str;
    
    printf("������main�֐��ł�\na=%d\n",a);
    printf("*str�������܂�---%s\n", str);
    func1();
    func2();
    
    return 0;
}

