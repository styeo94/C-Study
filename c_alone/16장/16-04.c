#include <stdio.h>

#define A 5
#define B (A+10)
/*
   매크로의 중첩
	printf("B * 2 = %d\n", B * 2);
	위의 경우 결과값은 30 이 나옴. 

*/

int main() {

	printf("A = %d\n", A);
	printf("B = %d\n", B);
	printf("B * 2 = %d\n", B * 2);
	return 0;
}
