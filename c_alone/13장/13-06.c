#include <stdio.h>

//공용체의 경우 모든 멤버의 초기화를 한꺼번에 할 수 없으며, 동시에 사용할 경우, 데이터 변질 우려가 있음.
union unTemp {
	char a;
	int b;
	double c;
} un;

int main() {
	printf("문자형 a의 주소와 크기 : %p, %ld\n", &un.a, sizeof(un.a));
	printf("정수형 b의 주소와 크기 : %p, %ld\n", &un.b, sizeof(un.b));
	printf("실수형 c의 주소와 크기 : %p, %ld\n", &un.c, sizeof(un.c));

	un.a = 'A';
	printf("문자형 a의 값 : %c\n", un.a);
	un.b = 100;
	printf("정수형 b의 값 : %d\n", un.b);
	un.c = 3.143;
	printf("실수형 c의 값 : %.2f\n", un.c);

	printf("문자형 a의 값 : %c\n", un.a);
	return 0;
}
