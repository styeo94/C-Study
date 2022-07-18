#include <stdio.h>

/* 포인터를 이용한 함수 호출( call by reference) 예제 */

void add(int x, int y, int *z);
void sub(int x, int y, int *z);
void mul(int x, int y, int *z);
void div(int x, int y, int *z);

int main() {
	
	int a, b, c;
	a = 20;
	b = 10;

	add(a, b, &c);
	printf("%d+%d=%d\n", a, b, c);

	sub(a, b, &c);
	printf("%d-%d=%d\n", a, b, c);

	mul(a, b, &c);
	printf("%d*%d=%d\n", a, b, c);

	div(a, b, &c);
	printf("%d/%d=%d\n", a, b, c);

	return 0;
}

void add(int x, int y, int *z){
	*z = x + y;
}
void sub(int x, int y, int *z){
	*z = x - y;
}
void mul(int x, int y, int *z){
	*z = x * y;
}
void div(int x, int y, int *z){
	*z = x / y;
}
