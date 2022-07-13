#include <stdio.h>

int main() {
	void *a;
	int b = 1234;

	a = &b;
	printf("%d\n", *a);

	return 0;
}
