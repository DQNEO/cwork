/**
 * Gitのコミットログの日付フォーマット処理を再現する
 * 
 * date.cのshow_dateのコードをマネした。
 */
#include <stdio.h>
#include <time.h>

char *weekday_names[] = {
  "Sunday",
  "Mondays",
  "Tuesdays",
  "Wednesdays",
  "Thursdays",
  "Fridays",
  "Saturdays"
};

char *month_names[] = {
  "January",
  "February",
  "March",
  "April",
  "May",
  "June",
  "July",
  "August",
  "September",
  "October",
  "November",
  "December"
};


int main()
{
  time_t t;
  struct tm *ptm;
  t = 1380980291;
  ptm = localtime(&t);

  printf("tm_wday = %d\n", ptm->tm_wday);
  printf("tm_mon = %d\n", ptm->tm_mon);
  printf("tm_mday = %d\n", ptm->tm_mday);
  printf("(tm_hour, tm_min, tm_sec) = (%d, %d, %d)\n",
	 ptm->tm_hour, ptm->tm_min, ptm->tm_sec);
  printf("tm_year + 1900 = %d\n", ptm->tm_year + 1900);
  printf("=============\n");


  // e.g. "Sat Oct 5 18:42:19 2013 +0900"
  printf("%.3s %.3s %d %02d:%02d:%02d %d%c%+05d\n",
	 weekday_names[ptm->tm_wday],
	 month_names[ptm->tm_mon],
	 ptm->tm_mday,
	 ptm->tm_hour, ptm->tm_min, ptm->tm_sec,
	 ptm->tm_year + 1900,
	 ' ',
	 900
	 );
  
  return 0;
}
