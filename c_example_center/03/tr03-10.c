#include <stdio.h>

int main() {
	short number = 0;
	int count = 0;
	long total_value = 0;

	number = 10;
	count = 200000000;
	total_value = number * count;

	printf("total_value = %ld \n", total_value);

	printf("short형의 크기는 %ld입니다.\n", sizeof(short));

	return 0;
}
