#include <stdio.h>
#define MINUTE_PER_TIME 60

int main() {

	int input, hour, minute;

	printf("분단위의 시간을 입력하시오:");
	scanf("%d", &input);

	hour = input / MINUTE_PER_TIME;
	minute = input % MINUTE_PER_TIME;

	printf("%d분은 %d시간 %d분 입니다. \n", input, hour, minute);

	return 0;
}
