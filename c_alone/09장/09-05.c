#include <stdio.h>

int main() {
	char *pArr[] = {"C언어", "자바", "베이직"};
	
	for (int i = 0; i < 3; i++) {
		printf("%s %p\n", pArr[i], &pArr[i]);
	}

	return 0;
}
