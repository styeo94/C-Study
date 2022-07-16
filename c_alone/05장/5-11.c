#include <stdio.h>

int main() {
	int input, total = 1;
	printf("정수를 입력하세요 : ");
	scanf("%d", &input);

	for(int i = input; i > 0; i--) {
		total = total * i;
		printf("%d, %d\n", total, i);
	}
	printf("%d! = %d\n", input, total);
	return 0;
}
