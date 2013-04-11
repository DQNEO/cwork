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
	while(1) {
		switch(menu_input()) {
			case 1:
				meibo_input(lp);
				break;
			case 2:
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
		"==== MENU ====\n"
		"1. INPUT  MEIBO\n"
		"2. OUTPUT MEIBO\n"
		"3. EXIT\n"
		"> "
		);

	char s[8];
	gets(s);
	return atoi(s);
}

int meibo_input(LPMYDATA lp)
{
	printf("-- INPUT --\n");
	printf("your name:");
	gets(lp->name);
	printf("your email:");
	gets(lp->email);
}

int meibo_output(LPMYDATA lp)
{
	printf("-- OUTPUT --\n");

	if (strcmp(lp->name ,"") == 0) {
		printf("NO DATA\n");
		return -1;
	}

	printf("name  : %s\n", lp->name);
	printf("email : %s\n", lp->email);
}
