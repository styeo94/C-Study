#include <stdio.h>

#define DOUBLE(x) x+x

int main() {
	
	int iVal;
	double fVal;

	fputs("정수를 입력하세요 : ", stdout);
	scanf("%d", &iVal);
	printf("출력 결과는 %d 입니다.\n", DOUBLE(iVal));

	fputs("실수를 입력하세요 : ", stdout);
	scanf("%lf", &fVal);
	printf("출력 결과는 %.3f 입니다.\n", DOUBLE(fVal));

	return 0;
}
