#include <stdio.h>
#include <math.h>

/* 함수를 이용하여 이차 함수의 2개의 근을 계산하는 프로그램 */

int quadeq(int a, int b, int c, double *r1, double *r2);

int main() {

	int a, b, c;
	double r1, r2;
	int result;

	printf("이차방정식 근을 구하는 함수 - a*x^2 + b*x + c = 0\n");
	printf("a의 값을 입력: ");
	scanf("%d", &a);
	printf("b의 값을 입력: ");
	scanf("%d", &b);
	printf("c의 값을 입력: ");
	scanf("%d", &c);
	result = quadeq(a, b, c, &r1, &r2);

	if (result == 0)
		printf("근이 없습니다.\n");
	else 
		printf("첫번째 근=%f, 두 번째 근=%f\n", r1, r2);
	
	return 0;
}


int quadeq(int a, int b, int c, double *r1, double *r2) {
	double det;
	det = b*b -4*a*c;

	if (det < 0)
		return 0;
	else if (det == 0) {
		*r1 = b * -1 / (2*a);
		*r2 = b * -1 / (2*a);
		return 1;
	} else {
		*r1 = (-1 *b + sqrt(det))/ (2*a);
		*r2 = (-1 *b - sqrt(det))/ (2*a);
		return 1;
	}
}
