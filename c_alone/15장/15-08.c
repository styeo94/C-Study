#include <stdio.h>
#include <string.h>

#define BUF_SIZE 30

int main() {
	
	char buf[BUF_SIZE];
	int readLen = 0;
	FILE *src, *des;

	src = fopen("캡처1.PNG", "rb");
	des = fopen("캡처_copy.PNG", "wb");

	if (src == NULL || des == NULL) {
		
		puts("파일을 열지 못했습니다.");
		return -1;
	}

	while(1) {

		readLen = fread(buf, 1, BUF_SIZE, src);
		if(readLen < BUF_SIZE) {
			
			if(feof(src) != 0) {
				
				fwrite(buf, 1, readLen, des);
				puts("파일 복사 완료!!!");
				break;

			} else {
				
				puts("파일 복사 실패!!!");
			}
		}
		fwrite(buf, 1, BUF_SIZE, des);
	}

	if(fclose(src) != 0 || fclose(des) != 0) {

		puts("파일을 닫지 못했습니다.");
		return -1;
	}
	return 0;
}
