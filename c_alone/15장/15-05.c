#include <stdio.h>

int main() {
	FILE *file;
	char buf[256];

	file = fopen("temp2.txt", "rt");
	
	if (file == NULL) {
		printf("파일이 존재하지 않습니다.\n");
	} else {
		while(1) {
			printf("읽기 시작\n");
			if(fgets(buf, 256, file) == NULL)
				break;

			printf("읽어온 문자열 : %s\n", buf);
			fclose(file);
		}
	}
	return 0;
}
