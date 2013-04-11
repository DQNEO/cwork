//0:40 start
#include <stdio.h>

typedef struct _TAG_DATA {
	char name[32];
	int  age;
	struct _TAG_DATA *nextdata;
} MYDATA, *LPMYDATA;

int main ()
{

	MYDATA c = {"piyo",  1, NULL};
	MYDATA b = {"tama",  5, &c};
	MYDATA a = {"pochi", 3, &b};

	LPMYDATA lp;

	for(lp = &a; lp != NULL ; lp = lp->nextdata) {
		printf("name = %s, age = %d \n", lp->name, lp->age);
	}	
}