#include <stdio.h>

/* if 조건문을 이용하여 복합문을 출력하는 프로그램 */

int main() {
	int grade;

	printf("점수를 입력하시오:");
	scanf("%d", &grade);

	if (grade > 60) {
		printf("합격입니다. 축하합니다.\n");
		printf("입력한 점수는  %d입니다.\n", grade);
	}
	return 0;
}
