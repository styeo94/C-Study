#include <stdio.h>

/* 다중 if 조건문을 이용한 예제 */

int main() {
	int a;

	printf("Type an integer number(1-5):");
	scanf("%d", &a);
	if ( a == 1) printf("The number is 1\n");
	else if (a == 2) printf("The number is 2\n");
	else if (a == 3) printf("The number is 3\n");
	else if (a == 4) printf("The number is 4\n");
	else if (a == 5) printf("The number is 5\n");
	else printf("The number is greater than 5\n");

	return 0;
}
