#include <stdio.h>

int func(int i,int j);

int main()
{
	int a,b,c;
	a = 10;
	b = 20;
	c = func(a,b);
	printf("%d * %d = %d\n", a, b, c);
	return 0;
}


int func(int x, int y)
{
	return x * y;
}