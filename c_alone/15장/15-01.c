#include <stdio.h>

/*
   fopen 파일 열기 함수의 원형
   FILE *fopen(char *filename, char *mode);
   
   fclose 파일 닫기 함수의 원형
   int fclose(FILE *stream);
*/
int main() {
	FILE *file;
	file = fopen("temp.txt", "rt");

	if(file == NULL) {
		printf("파일이 존재하지 않습니다. \n");
	}

	if (file != NULL) {
		printf("파일이 존재합니다. \n");
		fclose(file);
	}

	return 0;
}
