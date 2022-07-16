#include <stdio.h>

int Add(int a, int b);
int Min(int a, int b);

int main() {
	int a, b, sel, result;
	int (*fPtr)(int a, int b);

	while(1) {
		printf("다음 중 선택하시오 (1.덧셈 2.뺄셈 3.종료) : ");
		scanf("%d", &sel);

		switch(sel) {
			case 1:
				fPtr = Add;
				break;
			case 2:
				fPtr = Min;
				break;
			case 3:
				return 0;
			default:
				break;
		}

		printf("두 정수를 입력하시오 :");
		scanf("%d %d", &a, &b);
		result = fPtr(a, b);
		printf("결과 : %d\n", result);
	}

	return 0;
}

int Add(int a, int b) {
	return a + b;
}

int Min(int a, int b) {
	return a - b;
}
