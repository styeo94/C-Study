#include <stdio.h>

/* 다중 for 반복문 이용하여 도형을 구하는 프로그램 */

int main() {

	int i, j;

	for (j = 0; j < 5; j ++) {
		for (i = 0; i < 5; i++)
			printf("*");
		printf("\n");
	}

	return 0;
}
