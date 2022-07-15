#include <stdio.h>

int main() {
	/*
	   sprintf 는 무거움. itoa 나 fcvt 사용 권장 (성능면)
	   그러나 실무에서 디버깅 용도로 강력한 도구
	*/
	char str[100];
	int i = 10;
	double d = 3.14;

	sprintf(str, "%d", i);
	printf("정수를 문자열로 변환 : %s\n", str);

	sprintf(str, "%.2f", d);
	printf("실수를 문자열로 변환 : %s\n", str);

	return 0;
}
