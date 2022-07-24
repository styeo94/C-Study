/*
   5장 디버깅과 오류 처리
   파일이름 : strerror_use.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[]) {
	FILE *f;

	if (argc < 2) {
		printf("Usage : strerr_show nofilename\n");
		exit(1);
	}

	if ( ( f= fopen(argv[1], "r")) == NULL) {
		printf("Cannot open a file \"%s\"... (error message : %s)\n", argv[1], strerror(errno));
		exit(1);
	}

	printf("Open a file \"%s\".\n", argv[1]);

	fclose(f);

	return 0;
}
