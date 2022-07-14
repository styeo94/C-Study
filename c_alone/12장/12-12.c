#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char* arr[] = {"김맹구", "이영구", "박빠꾸", "김삼룡", "변강쇠"};
	puts("회사에서 김씨성을 가진 사람만 출력 하시오");

	for(i = 0; i < 5; i++) {
		if (!strncmp(arr[i], "김", 1)) {
			printf("%s\n", arr[i]);
		}
	}
	return 0;
}
