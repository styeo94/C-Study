#include <stdio.h>

int main() {

	int dan;

	printf("단수를 입력하시오 : ");
	scanf("%d", &dan);

	for (int i = 1; i < 10 ; i++){
		printf("%d * %d = %d\n", dan, i, dan * i);
	}

	return 0;
}
