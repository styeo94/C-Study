#include <stdio.h>

int main(){
	int a = 4;
	a = a * 2 + 6 / 2 - 1;
	printf("첫 번째 연산 결과는 : %d\n", a);

	a = 4;
	a *= 2 + 6 / 2 - 1;
	printf("두 번째 연산 결과는 : %d\n", a);

	return 0;
}
