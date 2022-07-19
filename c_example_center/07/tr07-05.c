#include <stdio.h>

/* 포임터를 이용한 함수 호출 (call by reference) */

void swap1(int i, int j);
void swap2(int *i, int *j);

int main() {
	int i = 40, j = 90;
	int *pi, *pj;

	pi = &i;
	pj = &j;

	printf("original : i = %d j = %d\n\n", i, j);
	swap1(i, j);
	printf("main : i = %d j = %d\n\n", i, j);

	swap2(pi, pj);
	printf("main : i = %d j= %d\n\n", i, j);
	
	return 0;
}

void swap1(int i, int j) {
	int temp;
	temp = i;
	i = j;
	j = temp;
	printf("call swap1 : i = %d j = %d\n", i, j);
}

void swap2(int *i, int *j) {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
	printf("call swap2 : i = %d j = %d\n", *i, *j);
}
