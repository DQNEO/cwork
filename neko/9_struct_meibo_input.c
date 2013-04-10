#include <stdio.h>

typedef struct _TAG_MYDATA
{
	char name[32];
	char email[32];
} MYDATA, *LPMYDATA;

int menu_input();
int meibo_input(LPMYDATA);
int meibo_output(LPMYDATA);

main()
{
	MYDATA data = {"",""};
	LPMYDATA lp = &data;
	int menuno;
	while(1) {
		menuno = menu_input();
		switch(menuno) {
			case 1:
				printf("-- INPUT --\n");
				meibo_input(lp);
				break;
			case 2:
				printf("-- OUTPUT --\n");
				meibo_output(lp);
				break;
			default:
				printf("bye\n");
				return;
		}
	}
}

int menu_input()
{
	printf(
		"==== MENU =====\n"
		"1. INPUT  MEIBO\n"
		"2. OUTPUT MEIBO\n"
		"3. EXIT\n"
		"> "
		);

	char ret[8];
	gets(ret);

	return atoi(ret);
}

int meibo_input(LPMYDATA lp)
{
	printf("your name:");
	gets(lp->name);
	printf("your email:");
	gets(lp->email);

}

int meibo_output(LPMYDATA lp)
{
	if (!strcmp(lp->name ,"")) {
		printf("NO DATA\n");
		return -1;
	}

	printf("name  : %s\n", lp->name);
	printf("email : %s\n", lp->email);
}
