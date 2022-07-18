#include <stdio.h>

/* 조건 연산자를 이용하여 최대값, 최소값을 구하는 프롣그램 */

int main() {
	int x, y;

	printf("x의 수  = ");
	scanf("%d", &x);
	printf("y의 수 = ");
	scanf("%d", &y);

	printf("최대값 = %d \n", (x>y) ? x : y);
	printf("최소값 = %d \n", (x<y) ? x : y);

	return 0;
}
