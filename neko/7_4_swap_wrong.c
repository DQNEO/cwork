#include <stdio.h>

/* swap関数を実装しようとして、値渡しにしちゃってうまくいかない例。 */

void swap(int, int);

int main()
{
    int a,b;
    a = 10;
    b = 20;
    
    swap(a, b);
    
    printf("a=%d b=%d \n", a, b);
    
}

void swap(int a, int b)
{
    int c;
    
    c = b;
    b = a;
    a = c;
    return;
}

