#include <stdio.h>

/* 다중 for 반복문을 이용한 예제 */

int main() {
	int n, m;

	for(n = 1; n < 10; n++) {
		printf("\n");
		for (m=1; m<10; m++)
			printf("%dX%d=%2d ", n, m, n*m);
	}

	printf("\n");
	return 0;
}
