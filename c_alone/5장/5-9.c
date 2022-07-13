#include <stdio.h>

int main() {
	int input1, input2, sum;
	char answer[2];
	

	for (;;) {
		sum = 0;
		printf("두 수를 입력하시오 : ");
		scanf("%d %d", &input1, &input2);

		if (input1 < input2) {
			for (int i = input1 ; i <= input2 ; i++) {
				sum += i;
			}

			printf("존재하는 두 수 사이 합 : %d\n", sum);

		} else {
			printf("두 번째 입력 수가 더 적습니다.\n");
			printf("그만 두시겠습니까?");
			scanf("%s",answer);
			if (answer == "Y") {
				return 0;
			} else {
				continue;
			}
		}
	}
	return 0;
}
