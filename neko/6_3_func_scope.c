#include <stdio.h>

int add(int);

int main()
{
	int sum;

	sum = add(10);
	printf("sum = %d\n", sum);

	sum = add(20);
	printf("sum = %d\n", sum);

	sum = add(100);
	printf("sum = %d\n", sum);

	return 0;
}

int add(int x)
{
	int goukei = 0;
	goukei += x;
	return goukei;
}