#include <stdio.h>

int main() {
	char str[3][10] = {"C언어", "자바", "베이직"};
	char (*pStr)[10];

	pStr = str;

	for(int i = 0; i < 3; i++){
		printf("%s\n", *(pStr + i));
	}

	return 0;
}
