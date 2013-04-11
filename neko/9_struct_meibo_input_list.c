#include <stdio.h>
#include <string.h>

typedef struct _TAG_MYDATA
{
	char name[32];
	char email[32];
} MYDATA, *LPMYDATA;

int menu_input();
int meibo_input(LPMYDATA);
int meibo_output(LPMYDATA);
int index_input();

main()
{
	MYDATA data[10];
	memset(data,'\0', sizeof(MYDATA[10]));
	LPMYDATA lp = &data[0];
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
	int index = index_input();
	if (index == -1) return -1;

	LPMYDATA lp_target = lp + index;

	printf("-- INPUT [%d]--\n", index);
	printf("your name:");
	gets(lp_target->name);
	printf("your email:");
	gets(lp_target->email);
}

int meibo_output(LPMYDATA lp)
{
	int index = index_input();
	if (index == -1) return -1;

	LPMYDATA lp_target = lp + index;

	printf("-- OUTPUT [%d]--\n", index);

	if (strcmp(lp_target->name ,"") == 0) {
		printf("NO DATA\n");
		return -1;
	}

	printf("name  : %s\n", lp_target->name);
	printf("email : %s\n", lp_target->email);
}


int index_input()
{
	char s[8];
	printf("Index?[0-9]:");
	gets(s);
	if (s[0] < '0' || s[0] > '9') {
		printf("Bad Index\n");
		return -1;
	}

	s[1] = '\0';
	return atoi(s);
}
