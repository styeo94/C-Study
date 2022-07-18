#include <stdio.h>

/* 2 차원 문자 배열에 문자 값을 넣은 후 출력하는 프로그램 */

int main() {
	
	char a[2][5];
	int r, c;
	a[0][0] = 'K';
	a[0][1] = 'O';
	a[0][2] = 'R';
	a[0][3] = 'E';
	a[0][4] = 'A';
	a[1][0] = 'J';
	a[1][1] = 'A';
	a[1][2] = 'P';
	a[1][3] = 'A';
	a[1][4] = 'N';

	for(r= 0; r <2 ; r++) {
		for (c=0; c<5; c++)
			printf("%c", a[r][c]);
		printf("\n");
	}

	return 0;
}
