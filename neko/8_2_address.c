#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4};
	int i;

	printf("address a = %p\n", a);
	for (i=0;i<4;i++) {
		printf("address %d = %p\n", i, &a[i]);
	}

	return 0;
}