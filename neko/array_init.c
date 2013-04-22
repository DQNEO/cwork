#include <stdio.h>

int main()
{
    int a[3]; // 宣言しただけでは、値は不定になる。
    int b[3] = {1,2,3}; // 宣言と同時に初期化
    int c[3] = {1,2,};  // 残りはゼロで埋められる。
    int d[] = {1,2,3,4}; // 添え字省略できる。
    int e[3] = {1,2,3,4}; // これは警告が出る

    //不定な配列
    printf("%d\n",a[0]); // 不定の値
    printf("%d\n",a[1]);
    printf("%d\n",a[2]);
    printf("%d\n",a[5]); // 何とエラーにはならない。
    printf("\n");

    //普通の配列
    printf("%d\n",b[0]);
    printf("%d\n",b[1]);
    printf("%d\n",b[2]);
    printf("\n");

    //初期化で省略したらゼロになる
    printf("%d\n",c[0]);
    printf("%d\n",c[1]);
    printf("%d\n",c[2]);
    printf("\n");

    printf("%d\n",d[0]);
    printf("%d\n",e[0]);
    return 0;
}
