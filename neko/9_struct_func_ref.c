/* �\���̂��Q�Ɠn������B�j��I���삪�ł���B */
#include <stdio.h>

struct POINT {
    int x;
    int y;
};

void func(struct POINT *);
main()
{
    struct POINT a = {10,20};
    printf("a = {%d, %d}\n", a.x, a.y);
    
    func(&a);

    printf("a = {%d, %d}\n", a.x, a.y);
}

void func(struct POINT *lp)
{
    lp->x = 22;
    lp->y = 33;
    
    printf("s = {%d, %d}\n", lp->x, lp->y);
    
}
