/* ”LC p.316 */

#include <stdio.h>
#include <time.h>

int main()
{
    time_t orgtime;
    struct tm *lpmytm;
    char *today;
    
    orgtime = time(NULL);
    lpmytm = localtime(&orgtime);
    
    printf("¡“ú‚Í%d”N%02dŒŽ%02d“ú‚Å‚·B\n",
        lpmytm->tm_year + 1900, lpmytm->tm_mon + 1, lpmytm->tm_mday
    );

    printf("Œ»ÝŽž‚Í%02dŽž%02d•ª%02d•b‚Å‚·B\n",
        lpmytm->tm_hour, lpmytm->tm_min, lpmytm->tm_sec);

    today = asctime(lpmytm);
    printf(today);
    return 0;
}
