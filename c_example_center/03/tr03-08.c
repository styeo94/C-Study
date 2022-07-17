#include <stdio.h>

int main() {
	int x, y, z;

	printf("x, y, z 값을 입력하시오:");
	scanf("%d %d %d", &x, &y, &z);

	printf("1)의 결과값은 %d 입니다.\n", x*y + y*z + z*x);
	printf("2)의 결과값은 %d 입니다.\n", (x+y*z)/x*y-z);

	return 0;
}
