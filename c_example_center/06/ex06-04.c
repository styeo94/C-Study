#include <stdio.h>

/* 포인터와 배열의 관계 예제 */

int main() {

	int *p, i;

	int data[5] = {1,2,3,4,5};

	char *pch;

	char subject[3][8] = {"Korean", "Math", "English"};

	p = &data[0];

	for (i = 0; i <5; i++) {
		printf("p+%d의 내용 = %d\n", i, *(p+i));
	}
	for (i = 0; i <3; i++) {
		printf("subject[%d]=%s\n", i,&subject[i][0]);
	}

	for (i = 0; i< 3; i++) {
		pch = &subject[i][0];
		printf("p가 가리키는 각 행의 문자열 = %s\n", pch);
	}

	return 0;
}
