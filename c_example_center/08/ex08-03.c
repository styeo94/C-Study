#include <stdio.h>

int main() {

	union cdata {
		int iwt;
		double dwt;
	};

	union cdata p1;
	union cdata *ptr;

	printf("공용체 데이터 크기 = %ld\n", sizeof(p1));
	p1.iwt = 50;
	printf("공용체 내의 정수 = %d\n", sizeof(p1.iwt));
	p1.dwt = 50.438;
	printf("공용체 내의 정수 = %d\n", sizeof(p1.iwt));

	return 0;
}
