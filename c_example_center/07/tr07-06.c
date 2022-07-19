#include <stdio.h>

/* 함수를 이용하여 각종 도형의 넓이를 구하는 프로그램 */

#define PI 3.141592
double triangle(int a, int h);
double rectangle(int a, int b);
double trapezoid(int a, int b, int h);
double circle(double r);

void main() {

	int a, b, h, r;
	double s;

	printf("삼각형의 넓이 계산\n");
	printf("밑변의 값을 입력: ");
	scanf("%d", &a);
	printf("높이의 값을 입력: ");
	scanf("%d", &h);
	s = triangle(a, h);
	printf("삼각형의 넓이 = %f\n\n", s);

	printf("사각형의 넓이 계산\n");
	printf("가로의 값을 입력: ");
	scanf("%d", &a);
	printf("세로의 값을 입력: ");
	scanf("%d", &b);
	s = rectangle(a, b);
	printf("사각형의 넓이 = %f\n\n", s);
	
	printf("사다리꼴의 넓이 계산\n");
	printf("밑변의 값을 입력: ");
	scanf("%d", &a);
	printf("윗변의 값을 입력: ");
	scanf("%d", &b);
	printf("높이의 값을 입력: ");
	scanf("%d", &h);
	s = trapezoid(a, b, h);
	printf("사다리꼴의 넓이 = %f\n\n", s);

	printf("원의 넓이 계산\n");
	printf("반지름의 값을 입력: ");
	scanf("%d", &r);
	s = circle(r);
	printf("원의 넓이 = %f\n\n", s);

}


double triangle(int a, int h) {
	double area;
	area = a * h / 2;
	return area;
}

double rectangle(int a, int b) {
	double area;
	area = a * b;
	return area;
}

double trapezoid(int a, int b, int h) {
	double area;
	area = (a + b) * h / 2;
	return area;
}

double circle(double r) {
	double area;
	area = r * r * PI; 
	return area;
}
