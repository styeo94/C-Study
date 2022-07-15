#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char str1[] = "1024";
	char str2[10];
	int total = 0;

	fputs("정수를 입력하세요 ", stdout);
	fgets(str2, sizeof(str2), stdin);
	total = atoi(str1) + atoi(str2);

	printf("두 수의 합은 %d 입니다.\n", total);

	return 0;
}
