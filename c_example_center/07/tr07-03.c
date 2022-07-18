#include <stdio.h>

/*함수를 이용하여 두 수의 대, 소를 확인하는 프로그램*/

int get_max(int x, int y);

int main() {

	int p, q;

	printf("두 개의 정수를 입력하시오.");

	scanf("%d %d", &p, &q);

	printf("두 수 중에서 큰 수는 %d 입니다. \n", get_max(p, q));

	return 0;
}

int get_max(int x, int y) {
	int value;
	value = (x > y) ? x : y;
	return value;
}
