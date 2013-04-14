#include <stdio.h>

int main()
{
	int a[] = {10,20,30,40};
	int i, *p;

	p = a;

	for (i=0;i<4;i++) {
		printf("%d, %d, %d\n", a[i], *(p + i), *(a + i));
	}

	return 0;
}