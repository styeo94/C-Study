#include <stdio.h>

/* switch 조건문을 이용하여 입력된 문자를 표시하는 프로그램 */

int main() {

	char letter;

	printf("a, b, c, d, e, f, g 중에서 글자를 선택하시오:");

	scanf("%c", &letter);

	switch(letter) {
		case 'a':
			printf("a를 선택하셨습니다.\n"); break;
		case 'b':
			printf("b를 선택하셨습니다.\n"); break;
		case 'c':
			printf("c를 선택하셨습니다.\n"); break;
		case 'd':
			printf("d를 선택하셨습니다.\n"); break;
		case 'e':
			printf("e를 선택하셨습니다.\n"); break;
		case 'f':
			printf("f를 선택하셨습니다.\n"); break;
		case 'g':
			printf("g를 선택하셨습니다.\n"); break;
		default:
			printf("잘못 선택했습니다.\n");
	}
	return 0;
}
