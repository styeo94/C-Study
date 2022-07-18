#include <stdio.h>

int main() {
	int a, b, c;
	printf("정수 3개를 입력하세요:");
	scanf("%d %d %d", &a, &b, &c);
	printf("a<b && c>a의 결과 : %d\n", a<b && c>a);
	printf("a>b && c>a의 결과 : %d\n", a>b && c>a);
	printf("a>b || c>a의 결과 : %d\n", a<b || c>a);
	printf("괄호를 사용하는 것이 더 좋음 \n");
	printf("(a>b)||(c>a)의 결과 : %d\n", (a>b) || (c>a));
	return 0;
}
