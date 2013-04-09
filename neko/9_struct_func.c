/* 構造体を関数で渡すと値コピーになる */
#include <stdio.h>

struct POINT {
    int x;
    int y;
};

void func(struct POINT);
main()
{
    struct POINT a = {10,20};
    printf("a = {%d, %d}\n", a.x, a.y);
    
    func(a);

    printf("a = {%d, %d}\n", a.x, a.y);
}

void func(struct POINT s)
{
    s.x = 22;
    s.y = 33;
    
    printf("s = {%d, %d}\n", s.x, s.y);
}
