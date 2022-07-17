#include <stdio.h>

int main() {
	int a;

	printf("논리합 연산자를 이용한 연산 :\n");
	a = 0 || 0;
	printf("거짓 || 거짓 = %d\n", a);
	a = 1 || 0;
	printf("참 || 거짓 = %d\n", a);
	a = 0 || 1;
	printf("거짓 || 참 = %d\n", a);
	a = 1 || 1;
	printf("참 || 참 = %d\n", a);
	printf("\n");
	
	printf("논리곱 연산자를 이용한 연산 :\n");
	a = 0 && 0;
	printf("거짓 && 거짓 = %d\n", a);
	a = 1 && 0;
	printf("참 && 거짓 = %d\n", a);
	a = 0 && 1;
	printf("거짓 && 참 = %d\n", a);
	a = 1 && 1;
	printf("참 && 참 = %d\n", a);
	printf("\n");


	printf("논리부정 연산자를 이용한 연산 :\n");
	a = !0;
	printf("!거짓 = %d\n", a);
	a = !1;
	printf("!참 = %d\n", a);
	printf("\n");
	return 0;
}
