#include <stdio.h>

int main() {

	int b = 100;
	int *p8 = &b;

	printf("b = %d\n", b);
	printf("&b = %p\n", &b);
	printf("*p8 = %d\n", *p8);
	printf("p8 = %p\n", p8);

	return 0;
}

