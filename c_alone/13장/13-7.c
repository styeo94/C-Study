#include <stdio.h>

enum Week {
	sun = 1,
	mon,
	tue,
	wed,
	thu,
	fri,
	sat
};


int main() {
	int day;

	printf("요일을 입력하세요 (1.일 2.월 3.화 4.수 5.목 6.금 7.토) : ");
	scanf("%d", &day);

	switch(day) {
		case sun:
			printf("일요일엔 짜파땡땡\n");
			break;
		case mon:
			printf("월요일엔 스트레스\n");
			break;
		case tue:
			printf("화요일엔 만나요\n");
			break;
		case wed:
			printf("수요일엔 빨강 장미를\n");
			break;
		case thu:
			printf("목요일엔 뭐하지?\n");
			break;
		case fri:
			printf("금요일엔 달걀 후라이\n");
			break;
		case sat:
			printf("토요일엔 나들이\n");
			break;
		default:
			printf("잘못 입력하셨습니다.\n");
	}

	return 0;
}
