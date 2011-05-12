#include <stdio.h>
#include <string.h>
main()
{
  char Meibo[5][20] = {"apple", "mango", "orange", "doragon fruites", "mikan" } ;

  printf("%s\n", &Meibo[0][0]);
  printf("%s\n", &Meibo[1][0]);
  printf("%s\n", &Meibo[2][0]);
  printf("%s\n", &Meibo[3][0]);
  printf("%s\n", &Meibo[4][0]);

}
