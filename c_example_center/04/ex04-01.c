#include <stdio.h>

int main() {
	int a, b, c;

	a = 10;
	b = 5;
	c = a + b;
	printf("%d+%d=%d\n", a,b,c);
	c = a - b;
	printf("%d-%d=%d\n", a,b,c);
	c = a * b;
	printf("%d*%d=%d\n", a,b,c);
	c = a / b;
	printf("%d/%d=%d\n", a,b,c);
	c = a % b;
	printf("%d%%%d=%d\n", a,b,c); /*%를 문자로 출력하려면 %% 로 표기해야 함. */

	return 0;

}
