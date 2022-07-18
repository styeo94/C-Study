#include <stdio.h>

/* if-else 조건문을 이용하여 나눗셈을 하는 프로그램 */

int main() {
	int x, y, result;

	printf("임의의 정수 값을 분자로 입력하시오:");
	scanf("%d", &x);

	printf("임의의 정수 값을 분모로 입력하시오:");
	scanf("%d", &y);

	if (y == 0) 
		printf("0 으로 나눌수는 없습니다.\n");
	else {
		result = x/y;
		printf("결과는 %d 입니다. \n", result);
	}
	
	return 0;
}
