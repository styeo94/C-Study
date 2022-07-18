#include <stdio.h>

/* do ~ while문을 이용하여 최대합과 자연수를 구하는 프로그램 */

int main() {

	int sum = 0, count = 0;

	do {
		++count;
		sum = sum + count;
	} while( sum < 100);

	printf("합이 100보다 작은 최대합은 = %d입니다.\n", sum -count);
	printf("마지막으로 더해지는 자연수는 %d입니다.\n", count -1);

	return 0;
}
