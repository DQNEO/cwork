#include <stdio.h>
#include <string.h>

char *mystrcat(char *, char *);

int main()
{
    char str1[32] = "hello,";
    char str2[32] = "world!";

    printf("%s\n", mystrcat(str1, str2));
    printf("%s\n", str1);
    return 0;
}

char *mystrcat(char *x, char *y)
{
    char *tmp;
    //strlenを使わずに自前でポインタを進める
    tmp = x;
    while(*x) {x++;}

    while((*x++ = *y++));

    return tmp;
}
