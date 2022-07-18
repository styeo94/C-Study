#include <stdio.h>

/* switch 조건문을 이용하여 매월 달수를 구하는 프로그램 */

int main() {

	int month, days;

	printf("달을 입력하시오:");
	scanf("%d", &month);

	switch(month){
		case 1:
			days = 31;
			break;
		case 2:
			days = 28;
			break;
		case 3:
			days = 31;
			break;
		case 4:
			days = 30;
			break;
		case 5:
			days = 31;
			break;
		case 6:
			days = 30;
			break;
		case 7:
			days = 31;
			break;
		case 8:
			days = 31;
			break;
		case 9:
			days = 30;
			break;
		case 10:
			days = 31;
			break;
		case 11:
			days = 30;
			break;
		case 12:
			days = 31;
			break;
		default : 
			printf("알 수 없는 달 입니다. \n");
	}

	printf("%d월은 %d일 까지 있습니다.\n", month, days);
	return 0;
}
