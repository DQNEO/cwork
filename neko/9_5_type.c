#include <stdio.h>

/* typedefの使い方 */
/* SEISU型を新しく宣言する。(実体はint型と同じ) */

typedef int SEISU;

main()
{
    SEISU n;
    
    for(n=0;n<10;n++) printf("%d,", n);
    
    printf("\n");
}
