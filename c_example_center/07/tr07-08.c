#include <stdio.h>

/* 16비트 10진수 값을 입력받아 2진수, 8진수로 출력하는 프로그램 */

void binary(short a);
void octal(short a);

int main() {

	short a;
	printf("10진수 정수 a의 값을 입력 : ");
	scanf("%hd", &a);

	binary(a);

	octal(a);

	return 0;
}


void binary(short a){
	short h, b[16];
	printf("%d의 2진수 값:", a);

	for( h = 15; h >= 0; h--) {
		b[h] = a % 2;
		a = a/2;
	}

	for ( h = 0; h <= 15; h++) {
		printf("%d", b[h]);
	}
	printf("\n");
}

void octal(short a) {
	short h, k, b[6] = {0,0,0,0,0,0};
	printf("%d의 8진수 값:", a);

	for( h = 5; h >= 0; h--) {
		b[h] = a %8;
		if ( a < 8) break;
		a = a/8;
	}

	for ( k = 0 ; k <=5 ; k ++)
		printf("%d", b[k]);
	printf("\n");
}
