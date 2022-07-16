#include <stdio.h>
/*
   파일 문자 입출력함수의 원형
   int fputc ( int character, FILE * stream);
*/

int main() {
	FILE *file;
	char ch;

	file = fopen("temp.txt", "wt");

	if(file == NULL) {
		printf("파일이 존재하지 않습니다.\n");
	} else {
		printf("파일이 존재합니다.\n");
		for(ch = 'A'; ch <= 'z'; ch++) {
			fputc(ch, file);
		}
		printf("\n");
		fclose(file);
	}
	return 0;
}
