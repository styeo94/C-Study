#include <stdio.h>
#include <math.h>

int main() {
	float x;
	float result = 0;

	printf("x의 값을 입력하시오 : ");
	scanf("%f", &x);

	result = (3*(x*x*x)) - 7*(x*x) + 9;
	//result = (3*(powf(x,3))) - (7*(powf(x,2))) + 9;

	printf("다항식의 값은 %f입니다.\n", result);

	return 0;
}
