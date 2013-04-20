#include <stdio.h>
#include <string.h>

char *mystrcat(char *, char *);

int main()
{
    char a[32] = "hello,";
    char b[] = " world!";

    printf("%s\n", mystrcat(a, b));
    printf("%s\n",a);
    return 0;
}

char *mystrcat(char *x, char *y)
{
    char *tmp = x + strlen(x);

    while( (*tmp++ = *y++) ) ;

    return x;
}

