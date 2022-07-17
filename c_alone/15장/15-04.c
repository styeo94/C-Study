#include <stdio.h>

/*
   파일에 문자열 쓰기 함수의 원형
   int fputs(const char *string, FILE *stream);
*/
int main() {
	FILE *file;
	char *str = "죽는 날까지 하늘을 우러러 한 점 부끄럼 없기를, 잎새에 이는 바람에도 나는 괴로워했다.";

	file = fopen("temp2.txt", "wt");

	if (file == NULL) {
		printf("파일이 존재하지 않습니다.\n");
	} else {
		fputs(str, file);
		printf("문자열이 파일에 쓰여졌습니다\n");
		fclose(file);
	}

	return 0;
}
