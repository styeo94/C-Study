#include <stdio.h>

int main() {
	int sum = 0;
	int input = 0;

	do { 
		printf("정수를 입력하세요 : ");
		scanf("%d", &input);
		sum += input;
	} while (input != 0);

	printf("총합은 %d 입니다\n", sum);
	
	return 0;
}
