#include <stdio.h>

int main() {
	int a, b;

	printf("b=%d\n", b);
	a = 1;
	b = a ? a+8 : a-8;
	printf("b=%d\n", b);

	a = 0;
	b = a ? a+8 : a-8;
	printf("b=%d\n", b);
	return 0;
}
