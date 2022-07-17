#include <stdio.h>
#include <string.h>

int main() {
	FILE *file;
	char buf[256];

	memset(buf, 0, 256);
	printf("문자열을 입력하시오 : ");
	fgets(buf, sizeof(buf), stdin);

	file = fopen("temp3.txt", "wt");

	if (file == NULL) {
		printf("파일이 존재하지 않습니다.\n");
	} else {
		int rslt = fwrite(buf, 1, sizeof(buf), file);
		printf("버퍼의 내용이 파일에 쓰여졌습니다.\n");
		printf("쓰여진 버퍼의 크기 : %d\n", rslt);
		fclose(file);
	}
	return 0;
}
