#include <stdio.h>

int main() {
	float meter;
	float pyung;
	printf("면적을 제곱미터 단위로 입력 하시오 : ");
	scanf("%f", &meter);
	pyung = meter / 3.3058;
	printf("%f 제곱미터는 %f 평입니다.\n", meter, pyung);
	return 0;
}
