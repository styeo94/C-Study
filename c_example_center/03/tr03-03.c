#include <stdio.h>

int main() {

	int d;
	char c;

	printf("정수를 입력하시오: ");
	scanf("%d", &d);

	printf("입력된 정수 값은 %d 입니다.\n", d);

	getchar();
	printf("문자를 입력하시오:");
	scanf("%c", &c);
	
	printf("입력된 문자는 %c입니다.\n", c);
	printf("입력된 문자는 %d입니다.\n", c);

	return 0;
}
