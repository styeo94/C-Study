#include <stdio.h>

/* for 반복문을 이용한 예제 */

int main() {
	int n, sum, sum5, sum6;
	sum = 0;

	for (n = 1; n <=100; n++){
		sum += n;
	}
	printf("1~100까지의 합 = %d\n", sum);

	sum = 0;
	for (n = 100; n > 0; n--) {
		sum += n;
	}

	printf("1~100까지의 합 = %d\n", sum);

	sum5 = 0;
	sum6 = 0;

	for (n = 100; n > 0; n--) {
		if (n %5 == 0) sum5 += n;
		if (n %6 == 0) sum6 += n;
	}

	printf("1에서 100사이 수 중 5의 배수의 합 = %d\n", sum5);
	printf("1에서 100사이 수 중 6의 배수의 합 = %d\n", sum6);

	return 0;
}
