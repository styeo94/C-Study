#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Lovev";
	char *p;

	p = strchr(str, 't');

	if (p != NULL) {
		*p = 'b';
		printf("변경 결과 : %s\n", str);
	} else {
		printf("NULL을 리턴하였습니다.\n");
	}

	return 0;
}
