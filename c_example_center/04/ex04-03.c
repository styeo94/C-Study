#include <stdio.h>

int main() {
	int a,b,c;

	a = 10;
	b = 5;

	c = a > b;
	printf("%d>%d = %d\n", a, b, c);
	c = a < b;
	printf("%d<%d = %d\n", a, b, c);
	c = a >= b;
	printf("%d>=%d = %d\n", a, b, c);
	c = a <= b;
	printf("%d<=%d = %d\n", a, b, c);
	c = a == b;
	printf("%d==%d = %d\n", a, b, c);
	c = a != b;
	printf("%d!=%d = %d\n", a, b, c);
	return 0;
}
