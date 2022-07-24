/*
   5장 디버깅과 오류처리
   파일이름 : perror_use.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	FILE *f;

	if (argc < 2) {
		printf("Usage : perror_use file_name\n");
		exit(1);
	}

	if ( (f = fopen(argv[1], "r")) == NULL) {
		perror("fopen");
		exit(1);
	}

	printf("Open a file \"%s\".\n", argv[1]);

	fclose(f);

	return 0;
}
