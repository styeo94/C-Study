#include <stdio.h>

/* if 조건문을 이용하여 대,소 관계를 확인하는 프로그램 */

int main() {
	int x, y;

	printf("두 수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	if (x > y)
		printf("%d는 %d보다 큰 수 입니다.\n", x, y);
	if (x < y)
		printf("%d는 %d보다 작은 수 입니다. \n", x, y);
	if (x == y)
		printf("%d는 %d와 같은 수 입니다. \n", x, y);
	return 0;
}
