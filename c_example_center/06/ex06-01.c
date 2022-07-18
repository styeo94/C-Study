#include <stdio.h>

/* 1차원 배열의 선언 및 초기화 예제 */

int main() {

	int score[4] = {80, 86, 90, 98};

	char letter[] = {'K', 'O', 'R', 'E', 'A'};

	char string[] = "Hello, C-language!";

	float avg, sum;
	int i;

	sum = 0.0;

	for (i = 0; i < 4; i ++) {
		printf("score[%d]=%d\n", i, score[i]);
		sum += score[i];
	}

	avg = sum / 4.0;
	printf("avgrage = %4.1f\n", avg);

	score[0] = 70;
	score[1] = 80;
	score[2] = 90;
	score[3] = 100;

	sum = 0.0;

	for (i = 0; i < 4; i++) {
		printf("score[%d]=%d\n", i, score[i]);
		sum += score[i];
	}

	avg = sum / 4.0;

	printf("avgrage = %4.1f\n", avg);

	for (i=0; i<5; i++) {
		printf("letter[%d]=%c\n", i, letter[i]);
	}

	printf("string=%s\n", string);

	return 0;
}
