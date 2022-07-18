#include <stdio.h>

/* while 반복문 이용하여 구구단을 구하는 프로그램 */ 

int main() {

	int n;
	int i = 1;

	printf("출력을 원하는 단: ");
	scanf("%d", &n);

	while (i <= 9) {
		printf("%d*%d=%2d\n", n, i, n*i);
		i++;
	}

	return 0;
}
