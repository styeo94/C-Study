#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Hello World";
	printf("*** 문자열 변경 전 ***\n");
	printf("%s \n\n", str);

	str[6] = 'K';
	str[7] = 'o';
	str[8] = 'r';
	str[9] = 'e';
	str[10] = 'a';

	printf("*** 문자열 변경 후 ***\n");
	printf("%s \n", str);

	strcpy(str, "Hello World");
	printf("***다시 변경***\n");
	printf("%s \n", str);

	return 0;
}
