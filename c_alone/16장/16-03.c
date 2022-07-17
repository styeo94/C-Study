#include <stdio.h>

#define A 5
#define B A+10

/*
   매크로의 중첩
	printf("B * 2 = %d\n", B * 2);
	위의 경우 결과값은 30 이 아니고, 25가 됨.
	실제 계산 중에는 5 + (10 * 2) 의 순으로 처리가되기 때문. 주의!!

*/

int main() {

	printf("A = %d\n", A);
	printf("B = %d\n", B);
	printf("B * 2 = %d\n", B * 2);

	return 0;
}
