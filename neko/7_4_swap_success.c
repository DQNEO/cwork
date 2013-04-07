#include <stdio.h>

/* swapŠÖ”‚Ì‚¿‚á‚ñ‚Æ“®‚­—á */

void swap(int *, int *);

int main()
{
    int a,b;
    a = 10;
    b = 20;
    
    swap(&a, &b);
    
    printf("a=%d b=%d \n", a, b);
    
}

void swap(int *x, int *y)
{
    int z;
    
    z = *y;
    *y = *x;
    *x = z;
    return;
}

