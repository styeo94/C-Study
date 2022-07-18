#include <stdio.h>

/* do-while 반복문을 이용한 예제 */

int main() {
	int n, sum;

	sum = 0;

	n = 1;
	while (n <= 100) {
		sum += n;
		n++;
	}

	printf("while : 1~100까지의 합 =%d\n", sum);

	sum = 0;
	n = 1;
	do  {
		sum += n;
		n++;
	} while (n <=100);

	printf("do while : 1~100까지의 합 =%d\n", sum);
	return 0;
}
