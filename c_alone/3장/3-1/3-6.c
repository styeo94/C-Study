#include <stdio.h>

int main() {

	int a = 74;

	printf("a의 값 : %x\n", a);
	printf("~a의 값 : %x\n", ~a);
	printf("a + ~a의 연산 결과는 : %x\n", a + ~a);
	
	return 0;
}
