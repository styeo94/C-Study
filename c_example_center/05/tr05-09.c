#include <stdio.h>

/* switch 조건문을 이용하여 사칙연산을 구하는 프로그램 */

int main() {

	char op;
	int x, y;

	printf("x, y 두 정수 값을 입력하시오: ");
	scanf("%d %d", &x, &y);
	printf("두 정수 값을 계산할 연산자(+,-,*,/)를 입력하시오: ");
	getchar();
	scanf("%c", &op);
	switch(op) {
		case '+':
			printf("x + y = %d\n", x+y);
			break;
		case '-':
			printf("x - y = %d\n", x-y);
			break;
		case '*':
			printf("x * y = %d\n", x*y);
			break;
		case '/':
			printf("x / y = %d\n", x/y);
			break;
		case '%':
			printf("x %% y = %d\n", x%y);
			break;
		default:
			printf("알 수 없는 연산입니다.");
	}
	return 0;
}
