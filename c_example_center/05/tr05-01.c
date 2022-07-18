#include <stdio.h>

/* if 조건문을 이용하여 출력문을 선택하는 프로그램 */

int main() {
	int number = 1;

	if(number == 1)
		printf("물이 따뜻하다.\n");
	else if(number == 2)
		printf("물이 메말랐다.\n");
	else
		printf("물이 풍부하다.\n");
	return 0;
}
