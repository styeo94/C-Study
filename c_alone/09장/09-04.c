#include <stdio.h>

int main() {
	char str[] = "love";
	char *pStr = "you";

	printf("str의 출력 : %s\n", str);
	printf("pStr의 출력 : %s\n", pStr);

	str[0] = 'r';
	//pStr[0] = 'T';

	printf("str의 출력 : %s\n", str);
	printf("pStr의 출력 : %s\n", pStr);
	return 0;
}
