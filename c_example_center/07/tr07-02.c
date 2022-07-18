#include <stdio.h>

/* 함수를 이용하여 임의의 정수의 제곱을 계산하는 프로그램*/
int square(int n);

int main() {

	int n, result;

	printf("임의 정수를 입력하시오.");
	scanf("%d", &n);

	result = square(n);

	printf("입력한 정수의 결과 값은 %d 입니다.\n", result);

	return 0;
}

int square(int n) {
	return (n*n);
}
