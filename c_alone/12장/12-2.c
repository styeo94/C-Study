#include <stdio.h>

int main() {
	char str[10];

	//fputs("gets문자열 입력 : ", stdout);
	//gets(str);
	//puts(str);

	fputs("fgets 문자열 입력 : ", stdout);
	fgets(str, sizeof(str), stdin);
	puts(str);

	return 0;
}
