#include <stdio.h>

/* 조건 연산자를 이용하여 출력을 선택하는 프로그램 */

int main() {

	int x, y, z;

	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	z = (x>y) ? x-y : y-x;
	printf("z = %d\n", z);

	return 0;
}
