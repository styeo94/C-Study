#include <stdio.h>

int main() {

	char a = 'A';
	char *pA = &a;

	int b = 100;
	int *pB = &b;

	double c = 3.14;
	double *pC = &c;

	printf("pA의 크기 : %ldbyte\n", sizeof(pA));
	printf("pB의 크기 : %ldbyte\n", sizeof(pB));
	printf("pC의 크기 : %ldbyte\n", sizeof(pC));

	printf("*pA의 크기 : %ldbyte\n", sizeof(*pA));
	printf("*pB의 크기 : %ldbyte\n", sizeof(*pB));
	printf("*pC의 크기 : %ldbyte\n", sizeof(*pC));
	
	return 0;
}
