#include <stdio.h>

/* while  반복문 이용하여 최대공약수를 구하는 프로그램 */

int main() {

	int x, y, r;

	printf("최대공약수 계산 : 두 개의 정수를 입력하시오 (큰수 , 작은수):");
	scanf("%d %d", &x, &y);

	while(y != 0) {
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대공약수는 %d 입니다. \n", x);

	return 0;
}
