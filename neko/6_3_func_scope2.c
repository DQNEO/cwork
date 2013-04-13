#include <stdio.h>

int i = 10;
void func();

int main()
{
	int i = 5;
	{
		int i = 3;
		printf("i in block = %d\n", i);
	}


	printf("i in main = %d\n", i);
	func();
	return 0;
}

void func()
{
	printf("i in global = %d\n", i);
}