#include <stdio.h>

/* 2차원 배열의 선언 및 초기화 예제 */

int main() {
	int score[2][4] = {{80, 86, 90, 98}, {76, 80, 98, 60}};

	char letter[2][5] = {{'K', 'O', 'R', 'E', 'A'}, {'J', 'A', 'P', 'A', 'N'}};

	float avg, sum1, sum2;
	int i;

	sum1 = 0.0;
	sum2 = 0.0;

	for (i= 0; i < 4 ; i++) {
		printf("국어점수 : score[0][%d] = %d\n", i, score[0][i]);
		sum1 += score[0][i];
	}
	for (i= 0; i < 4 ; i++) {
		printf("수학점수 : score[1][%d] = %d\n", i, score[1][i]);
		sum2 += score[1][i];
	}
	avg = sum1 / 4.0;
	printf("국어 average = %4.1f\n", avg);
	avg = sum2 / 4.0;
	printf("수학 average = %4.1f\n", avg);

	for (i=0; i<5; i++)
		printf("letter[0][%d]=%c\n", i, letter[0][i]);
	for (i=0; i<5; i++)
		printf("letter[1][%d]=%c\n", i, letter[1][i]);
	return 0;
}
