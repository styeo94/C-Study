#include <stdio.h>

/* 2x3 2차원 정수 배열에 정수 값을 넣은 후 출력하는 프로그램 */

int main() {

	int a[2][3];
	a[0][0] = 1; a[0][1] = 3; a[0][2] = 5;
	a[1][0] = 7; a[1][1] = 9; a[1][2] = 11;

	printf("%d  %d  %d\n", a[0][0],a[0][1],a[0][2]);
	printf("%d  %d  %d\n", a[1][0],a[1][1],a[1][2]);
	

	return 0;
}
