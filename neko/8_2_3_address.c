#include <stdio.h>

int main()
{
	int i, *p, a[] = {20,40,60,80};
	p = a;
	
	for (i=0;i<4;i++) {
		printf("address = %p, %p, %p\n", &a[i], a + i , p + i);
	}
	return 0;
}