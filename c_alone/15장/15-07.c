#include <stdio.h>
#include <string.h>

/*
   파일 입력 함수의 원형
   size_t fread(void *buffer, size_t size, size_t count, FILE *stream);
*/
int main() {
	FILE *file;
	char buf[256];

	file = fopen("temp3.txt", "rt");

	printf("자료형의 크기 sizeof(char) : %ld\n", sizeof(char));
	if (file == NULL) {
		printf("파일이 존재하지 않습니다.\n");
	} else {
		memset(buf, 0, 256);
		while(fread(buf, sizeof(char), 256, file)) {
			printf("%s\n", buf);
		}
		fclose(file);
	}
	return 0;
}
