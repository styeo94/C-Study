#include <stdio.h>
#include <string.h>

int main() {
	char str[0];

	fputs("gets 문자열 입력 : ", stdout);
	gets(str);
	puts(str);

	fputs("fgets 문자열 입력 : ", stdout);
	fgets(str, sizeof(str), stdin);
	puts(str);
	
	return 0;
}
