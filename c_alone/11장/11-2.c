#include <stdio.h>

void Swap(int *a, int *b);

int main() {
	int x = 10, y = 20;
	int *pX, *pY;

	pX = &x;
	pY = &y;

	printf("초기값 x = %d, y = %d\n", x, y);
	printf("초기값 주소 x = %p, y = %p\n", &x, &y);
	printf("초기값 주소 pX = %p, pY = %p\n\n", &pX, &pY);
	Swap(pX, pY);
	printf("함수 밖에서 변경 후 *pX = %d, *pY = %d\n", *pX, *pY);
	printf("함수 밖에서 변경 후 주소 x = %p, y = %p\n\n", &x, &y);

	return 0;
}


void Swap(int *a, int *b) {
	printf("함수 안에서 변경 후 *a = %d, *b = %d\n", *a, *b);
	printf("함수 안에서 주소 : a = %p, b = %p\n", &a, &b);
	int *temp;
	temp = a;
	a = b;
	b = temp;
	printf("함수 안에서 변경 후 *a = %d, *b = %d\n", *a, *b);
	printf("함수 안에서 주소 *a = %p, *b = %p\n\n", &a, &b);
}
