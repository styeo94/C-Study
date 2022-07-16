#include <stdio.h>

int main() {
	int a;
	int b;

	a = 5;
	printf("++a result : %d\n", ++a);

	a = 5;
	printf("a++ result : %d\n", a++);
	printf("a를 다시 출력 : %d\n\n", a);

	b= 10;

	printf("--b 처리결과 : %d\n", --b);

	b = 10;
	printf("b-- 처리결과 : %d\n", b--);
	printf("b를 다시 출력 : %d\n\n", b);


	return 0;
}
