#include <stdio.h>
#define PI 3.14

/*
   전처리 지시자 #define
   세미콜론을 사용하지 않으며, 한 줄에 1개씩만 표현
*/

int main() {

	double area;
	double radius;

	fputs("반지름을 입력하시오 : ", stdout);
	scanf("%lf", &radius);

	area = radius * radius * PI;
	printf("원의 넓이는 %lf 입니다.\n", area);

	return 0;
}
