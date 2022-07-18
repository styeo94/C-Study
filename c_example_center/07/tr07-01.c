#include <stdio.h>

/*함수를 이용하여 거듭제곱을 계산하는 프로그램 */

int power(int x, int y);

int main() {
	int result1, result2;

	result1 = power(2,4);
	result2 = power(3,5);

	printf("result1 = %d result2 = %d\n", result1, result2);

	return 0;
}

int power(int x, int y) {
	int i;
	long result = 1;

	for (i = 0 ; i < y; i++) {
		result *= x;
	}
	return result;
}
