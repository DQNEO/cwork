/* �LC p.316 */

#include <stdio.h>
#include <time.h>

int main()
{
    time_t orgtime;
    struct tm *lpmytm;
    char *today;
    
    orgtime = time(NULL);
    lpmytm = localtime(&orgtime);
    
    printf("������%d�N%02d��%02d���ł��B\n",
        lpmytm->tm_year + 1900, lpmytm->tm_mon + 1, lpmytm->tm_mday
    );

    printf("���ݎ�����%02d��%02d��%02d�b�ł��B\n",
        lpmytm->tm_hour, lpmytm->tm_min, lpmytm->tm_sec);

    today = asctime(lpmytm);
    printf(today);
    return 0;
}
