#include <stdio.h>

/* if 조건문을 이용하여 양수와 음수를 구별하는 프로그램 */

int main() {
	int number;

	printf("임의의 정수를 입력하시오:");
	scanf("%d", &number);

	if (number > 0) printf("양수입니다.\n");
	printf("입력된 값은 %d입니다.\n", number);
	return 0;
}
