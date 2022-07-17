#include <stdio.h>

extern int Add(int a, int b);

int main() {
	int result;
	result = Add(2, 3);
	printf("두 수의 합은 %d 입니다.\n", result);

	return 0;
}
