#include <stdio.h>

/* 사칙연산을 처리하는 예제 */

int main() {

	int a, b, c;

	a = 20;
	b = 10;

	c = a+b;
	printf("%d+%d=%d\n", a, b, c);

	c = a-b;
	printf("%d-%d=%d\n", a, b, c);

	c = a*b;
	printf("%d*%d=%d\n", a, b, c);

	c = a/b;
	printf("%d/%d=%d\n", a, b, c);

	
	
	return 0;
}
