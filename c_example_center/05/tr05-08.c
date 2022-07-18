#include <stdio.h>

/* 다중 if 조건문을 이용하여 학점을 구하는 프로그램 */

int main() {

	int grade;

	printf("점수를 입력하시오:");
	scanf("%d", &grade);

	if (grade >= 90)
		printf("A 학점 입니다.\n");
	else if (grade >= 80)
		printf("B 학점 입니다.\n");
	else if (grade >= 70)
		printf("C 학점 입니다.\n");
	else if (grade >= 60)
		printf("D 학점 입니다.\n");
	else	
		printf("F 학점 입니다.\n");
	return 0;
}
