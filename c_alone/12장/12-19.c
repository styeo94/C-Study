#include <stdio.h>
#include <stdlib.h>

int main() {
	double value = 314.159265;
	char* pStr;
	int dec, sign;
	char string[100]; 
	
	sprintf(string,"%f", value);
	printf("원본은 : %s\n\n", string);

	pStr = fcvt(value, 4, &dec, &sign);
	printf("변환된 문자열은 %s 입니다.\n", pStr);
	printf("소수점 위치는 %d, 부호는 %d 입니다.\n", dec, sign);

	value = -314.159265;
	pStr = fcvt(value, 6, &dec, &sign);
	printf("변환된 문자열은 %s 입니다.\n", pStr);
	printf("소수점 위치는 %d, 부호는 %d 입니다.\n", dec, sign);

	return 0;
}

