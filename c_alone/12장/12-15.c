#include <stdio.h>
#include <string.h>

int main() {
	char string[] = "f(x)=a+b*c%d-f";
	char strSeparate[] = "%=+-*";
	char *strPos = string;

	printf("%s\n", strPos);

	do {
		// strpbrk 함수는 첫번째 인수로 주어진 문자열에서 두번째 인수로 주어진
		// 문자열에 속해 있는 문자 중 가장 먼저 발견된 문자를 찾아 그 번지를 
		// 리턴하는 기능
		strPos = strpbrk( strPos, strSeparate);

		if (strPos != NULL) {
			printf("%s\n", strPos);
			++strPos;
		}
	}
	while( strPos != NULL);

	return 0;
}	
