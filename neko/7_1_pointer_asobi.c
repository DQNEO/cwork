/* pointer */
#include <stdio.h>

int main()
{
    int c,b,a;

    a=1;
    b=2;
    c=3;

    printf("a=%d, b=%d, c=%d\n", a,b,c);

    printf("address of a is %p\n", &a);
    printf("address of b is %p\n", &b);
    printf("address of c is %p\n", &c);

    int *p;
    p = &b;
    
    printf("address of p-1 is %p\n", p-1);
    printf("address of p   is %p\n", p);  
    printf("address of p+1 is %p\n", p+1);
    

    *(p-1) = 0;
    *(p+1) = 4;

    printf("a=%d, b=%d, c=%d\n", a,b,c);
}

