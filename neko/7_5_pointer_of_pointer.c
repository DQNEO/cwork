#include <stdio.h>

/* ポインタのポインタ */

int main()
{
    int a;
    int *p;
    int **pp;
    
    p = &a;
    pp = &p;
    **pp = 10;
    
    printf("a=%d *p=%d **pp=%d \n", a, *p, **pp);
    
}
