#include <stdio.h>

/* if-else 조건문을 이용하여 수를 확인하는 프로그램 */

int main() {
	int input;

	printf("input 값을 입력하시오: ");
	scanf("%d", &input);

	if (input > 0)
		printf("양수 입니다. \n");
	else {
		if(input < 0)
			printf("음수입니다.\n");
		else 
			printf("제로 입니다.\n");
	}
	return 0;
}
