#include <stdio.h>

/* 두 배열의 내용을 서로 바꾸는 프로그램 */

int main() {

	char a[] = "KOREA";
	char b[] = "JAPAN";
	char c;
	int n;

	printf("a = %s\n", a);
	printf("b = %s\n", b);

	for(n=0; n<5; n++) {
		c = a[n];
		a[n] = b[n];
		b[n] = c;
	}

	printf("a = %s\n", a);
	printf("b = %s\n", b);


	return 0;
}
