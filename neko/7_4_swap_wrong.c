#include <stdio.h>

/* swapŠÖ”‚ğÀ‘•‚µ‚æ‚¤‚Æ‚µ‚ÄA’l“n‚µ‚É‚µ‚¿‚á‚Á‚Ä‚¤‚Ü‚­‚¢‚©‚È‚¢—áB */

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

