/* pointer */
#include <stdio.h>

int main()
{
    double d3,d2,d1;
    int    i3,i2,i1;
    char   c3,c2,c1;
    
    printf("address of c1 is %p\n", &c1); // 1byte
    printf("address of c2 is %p\n", &c2); // 1byte
    printf("address of c3 is %p\n", &c3); // 1byte
    printf("address of i1 is %p\n", &i1); // 4bytes
    printf("address of i2 is %p\n", &i2); // 4bytes
    printf("address of i3 is %p\n", &i3); // 4bytes
    printf("address of d1 is %p\n", &d1); // 8bytes
    printf("address of d2 is %p\n", &d2); // 8bytes
    printf("address of d3 is %p\n", &d3); // ?
}

