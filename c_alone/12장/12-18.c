#include <stdio.h>
#include <stdlib.h>

int main() {
	int value = 70;
	char string[100];
	int radix = 10;
	/* ######### 인터넷 어떤 문서에 따르면 itoa는 더이상 사용하지 않는단다.*/

	//itoa(value, string, radix);
	//printf("변환된 문자열은 %s 입니다. \n", string);

	//value = -50;
	//itoa(value, string, radix);
	//printf("변환된 문자열은 %s 입니다. \n", string);

	/* ######### 대신해서 사용하는 게 sprintf 임. 첫번째 인자가 반환받을 값*/ 

	sprintf(string, "%d", value);

	printf("변환된 문자열은 %s 입니다. \n", string);

	value = -50;

	sprintf(string, "%d", value);
	printf("변환된 문자열은 %s 입니다. \n", string);

	return 0;
}
