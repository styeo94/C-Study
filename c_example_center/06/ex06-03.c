#include <stdio.h>

/* 포인터의 선언 및 사용 예제 */

int main() {

	int *p1, *p2;
	int a, b;

	a = 10;
	b = 20;

	p1 = &a;
	p2 = &b;

	printf("a의 주소=%p, a의 값 = %d\n", &a, a);
	printf("b의 주소=%p, b의 값 = %d\n", &b, b);

	*p1 = -100;
	*p2 = 75;

	printf("p1이 가리키는 주소의 메모리 내용 = %d\n", *p1);
	printf("p2이 가리키는 주소의 메모리 내용 = %d\n", *p2);

	printf("변수 a의 값 = %d\n", *p1);
	printf("변수 b의 값 = %d\n", *p2);
	
	return 0;
}
