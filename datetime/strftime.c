#include <stdio.h>
#include <time.h>

int main()
{
  time_t t;
  struct tm *mytm;
  char strtime[256];

  t = 1380907099;
  mytm = localtime(&t);

  //format of git log
  //Thu Oct 3 14:42:14 2013 +0000

  //output
  //Sat Oct 5 02:18:19 2013
  strftime(strtime, 255, "%a %b%e %H:%M:%S %Y", mytm);

  printf("%d\n", (int)t);
  printf("%s\n", strtime);
  return 0;
}
