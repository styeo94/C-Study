#include <stdio.h>

int main() {
	int a, b;
	/* 대입연산자 = */
	a = 1;
	printf("a = %d\n", a);
	/* 대입연산자 += */
	a = 2;
	b = 4;
	b += a;
	printf("b = %d\n", b);
	/* 대입연산자 -= */
	a = 2;
	b = 4;
	b -= a;
	printf("b = %d\n", b);
	/* 대입연산자 *= */
	a = 2;
	b = 4;
	b *= a;
	printf("b = %d\n", b);
	/* 대입연산자 += */
	a = 2;
	b = 4;
	b /= a;
	printf("b = %d\n", b);


	
	return 0;
}
