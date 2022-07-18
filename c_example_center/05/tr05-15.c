#include <stdio.h>

/* 다중 for 반복문 이용하여 구구단을 수행하는 프로그램 */

int main() {
	
	int i, j;

	for (j = 1; j <= 9 ; j++) {
		for (i = 1 ; i <=9 ; i ++) 
			printf("%d*%d=%2d ", j, i, j*i);
		printf("\n\n");
	}

	return 0;
}
