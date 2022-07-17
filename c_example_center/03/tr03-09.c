#include <stdio.h>

int main() {
	double cm;
	int mm;

	printf("밀리미터 길이를 입력하시오:");
	scanf("%d", &mm);

	cm = 0.1 * mm;

	printf("밀리미터 %d는 %4.2f센티미터입니다.\n", mm, cm);

	return 0;
}
