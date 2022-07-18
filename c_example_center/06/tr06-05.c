#include <stdio.h>

/* 배열과 포인터를 이용한 프로그램 */

int main() {

	int *ip, i;

	int iarray[3] = {10, 20, 30};
	char *pch;

	char country[2][6] = {"Korea", "Japan"};

	ip = &iarray[0];

	for (i = 0; i <3; i++){
		printf("주소 ip+%d의 내용=%d\n", i, *ip);
		ip++;
	}

	for(i = 0; i < 2; i++) 
		printf("country[%d]=%s\n", i, &country[i][0]);

	pch = &country[0][0];

	for(i =0; i <5; i++) {
		printf("pch가 가리키는 주소의 내용 = %c\n", *pch);
		pch++;
	}

	return 0;
}
