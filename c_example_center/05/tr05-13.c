#include <stdio.h>

/* for 반복문 이용하여 팩토리얼을 구하는 프로그램 */

int main() {

	int sum = 1;
	int i, n;

	printf("정수를 입력하시오:");
	scanf("%d", &n);

	for (i = 1; i <= n; i+=1)
		sum = sum * i;

	printf("%d!은 %d입니다.\n", n, sum);

	return 0;
}
