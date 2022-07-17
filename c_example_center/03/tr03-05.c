#include <stdio.h>

int main() {
	int i = 10;
	int j = 010;
	int k = 0x10;

	printf("10진수 :\n");
	printf("변수 i = %d입니다.\n", i);
	printf("변수 j = %d입니다.\n", j);
	printf("변수 k = %d입니다.\n", k);

	printf("\n8진수 :\n");
	printf("변수 i = %o입니다.\n", i);
	printf("변수 j = %o입니다.\n", j);
	printf("변수 k = %o입니다.\n", k);

	printf("\n16진수 :\n");
	printf("변수 i = %x입니다.\n", i);
	printf("변수 j = %x입니다.\n", j);
	printf("변수 k = %x입니다.\n", k);
	return 0;
}
