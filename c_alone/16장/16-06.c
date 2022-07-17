#include <stdio.h>

#define DOUBLE(x) x+x

/*
   매크로의 함수를 사용 시, 주의점은  음수를 넣었을 때 
	-5+5 가 될 수 있어 0 반환.
	이경우 (x+x) 라고 하면, -(x+x)로 처리되어 원하는 값을 얻을 수 있음.
*/
int main() {

	int iVal;
	double fVal;

	fputs("정수를 입력하세요 : ", stdout);
	scanf("%d", &iVal);
	printf("출력 결과는 %d 입니다.\n", -DOUBLE(iVal));

	return 0;
}
