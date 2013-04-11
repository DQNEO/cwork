//0:40 start
#include <stdio.h>

typedef struct _TAG_DATA {
	char name[32];
	int  age;
	struct _TAG_DATA *nextdata;
} MYDATA;

main ()
{

	MYDATA a = {"pochi", 3};
	MYDATA b = {"tama", 5};
	MYDATA c = {"piyo", 1};

	a.nextdata = &b;
	b.nextdata = &c;
	c.nextdata = NULL;

	MYDATA *lp;

	for(lp = &a; lp != NULL ; lp = lp->nextdata) {
		printf("name = %s, age = %d \n", lp->name, lp->age);
	}	
}