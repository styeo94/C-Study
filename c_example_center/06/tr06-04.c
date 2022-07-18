#include <stdio.h>

/* 포인터를 이용한 프로그램 */

int main() {

	int *ip;
	char *cp;
	int a;
	char k;

	a = 10;
	k = 'a';

	ip = &a;
	cp = &k;

	printf("a의 주소=%p, a의 값=%d\n", ip, a);
	printf("k의 주소=%p, k의 값=%c\n", cp, k);

	printf("ip가 가리키는 메모리 내의 내용 = %d\n", *ip);
	printf("cp가 가리키는 메모리 내의 내용 = %c\n", *cp);


	return 0;
}
