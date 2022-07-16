#include <stdio.h>
#include <string.h>

/*
   파일 문자 읽기 함수의 원형
   int fgetc ( FILE * stream );
*/
int main() {

	FILE *file;
	char ch;
	char str[2] = {0,};
	char buf[256] = {0,};

	file = fopen("temp.txt", "rt");

	if(file == NULL) {
		
		printf("파일이 존재하지 않습니다.\n");
	} else {


		do {
			ch = fgetc(file);
			sprintf(str, "%c", ch);
			strcat(buf, str);
		} while(ch != EOF);
		puts(buf);
		fclose(file);

	}
	
	return 0;
}
