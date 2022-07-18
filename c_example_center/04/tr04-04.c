#include <stdio.h>

int main() {
	int x, y, ans_x, ans_y, ans_z, ans_a;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);

	ans_x = x + 1;
	ans_y = y + 1;
	ans_z = x + y;
	ans_a = y = x = 10;

	printf("수식 x+1의 값은 %d\n", ans_x);
	printf("수식 y+1의 값은 %d\n", ans_y);
	printf("수식 x+y의 값은 %d\n", ans_z);
	printf("수식 y=x=10의 값은 %d\n", ans_a);
	return 0;
}
