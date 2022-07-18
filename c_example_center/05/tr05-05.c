#include <stdio.h>

/* if-else 조건문을 이용하여 합격, 불합격을 확인하는 프로그램 */

int main() {
	int score;

	printf("점수를 입력하시오:");
	scanf("%d", &score);

	if (score >= 60)
		printf("합격입니다. 축하합니다.\n");
	else 
		printf("미안합니다. 불합격입니다.\n");

	return 0;
}
