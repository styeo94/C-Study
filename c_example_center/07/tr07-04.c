#include <stdio.h>

/* ㅎ마수를 사용하여 두 수를 입력받아 평균을 출력하는 프로그램 */

float Average(float x, float y);

int main() {

	float num1, num2, result;

	printf("두 개의 실수를 입력하시오.");
	scanf("%f %f", &num1, &num2);

	result = Average(num1, num2);

	printf("두 실수의 평균 : %f 입니다.\n", result);
	


	return 0;
}

float Average(float x, float y) {
	float z;
	z = (x + y) / 2;

	return z;
}
