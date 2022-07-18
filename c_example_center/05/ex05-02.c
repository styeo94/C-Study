#include <stdio.h>

int main() {
	int a, b;

	printf("두 수를 입력하시오 : ");
	scanf("%d %d", &a, &b);

	if ( a > b) printf("a가 b보다 크다\n");
	printf("a = %d b = %d\n", a, b);

	if (a > b ) printf("a가 b보다 크다\n");
	else printf("a가 b보다 크지 않다\n");

	if (a > b) {
		printf("a가 b보다 크다\n");
		printf("a는 b보다 %d 만큼 크다\n", a-b);
	} else {
		printf("a가 b보다 크지 않다\n");
		printf("b는 a보다 %d만큼 크다\n", b-a);
	}

	return 0;
}
