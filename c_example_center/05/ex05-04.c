#include <stdio.h>

/* switch 조건문을 이용한 예제 */

int main() {
	int a;

	printf("Type an integer number(1-5):");

	scanf("%d", &a);

	switch(a) {
		case 1:
			printf("The number is 1\n");
			break;
		case 2:
			printf("The number is 2\n");
			break;
		case 3:
			printf("The number is 3\n");
			break;
		case 4:
			printf("The number is 4\n");
			break;
		case 5:
			printf("The number is 5\n");
			break;
		default:
			printf("The number is greater than 5\n");
	}
	return 0;
}
