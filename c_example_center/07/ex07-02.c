#include <stdio.h>

/* 함수를 이용하여 사칙연산을 처리하는 예제 */

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main() {
	int a, b, c;
	a = 20;
	b = 10;

	c = add(a, b);
	printf("%d+%d=%d\n", a, b, c);

	c = sub(a, b);
	printf("%d-%d=%d\n", a, b, c);

	c = mul(a, b);
	printf("%d*%d=%d\n", a, b, c);

	c = div(a, b);
	printf("%d/%d=%d\n", a, b, c);
	
	return 0;
}

int add(int x, int y) {
	return x + y;
}
int sub(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}
int div(int x, int y) {
	return x / y;
}
