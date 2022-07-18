#include <stdio.h>

/* if 조건문을 이용한 예제 */

int main() {

	int a, b;

	printf("두 수를 입력하시오: ");
	scanf("%d %d", &a, &b);

	if (a > b) printf("a가 b보다 크다\n");
	printf("a = %d b=%d\n", a, b);

	if (a < b) printf("a가 b보다 작다\n");
	printf("a = %d b=%d\n", a, b);

	return 0;
}
