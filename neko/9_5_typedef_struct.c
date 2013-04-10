/* ”LC \‘¢‘Ì‚ğtypedef‚·‚éƒTƒ“ƒvƒ‹ */
#include <stdio.h>

typedef struct _TAG_POINT {
    int x;
    int y;
} POINT, *LPPOINT;

main() {
    POINT p;
    
    p.x = 1;
    p.y = 2;
    
    printf("p  = {%d, %d}\n", p.x, p.y);
    
    LPPOINT lp;
    lp->x = 3;
    lp->y = 4;
    
    printf("lp = {%d, %d}\n", lp->x, lp->y);
}

