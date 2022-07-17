#include <stdio.h>

int main() {
	int x = 30;
	const int y = 5;

	printf("변수 x의 초기값은 %d입니다.\n", x);
	printf("상수 y의 초기값은 %d입니다.\n", y);

	x = 10;
	//y = 8;

	printf("x의 값은 %d로 바뀌었습니다.\n", x);	
	//printf("y의 값은 %d로 바뀌었습니다ㅑ.\n", y);	
	return 0;
}
