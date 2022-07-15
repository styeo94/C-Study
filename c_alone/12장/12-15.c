#include <stdio.h>
#include <string.h>

int main() {
	char string[] = "f(x)=a+b*c%d-f";
	char strSeparate[] = "%=+-*";
	char *strPos = string;

	printf("%s\n\n", strPos);

	do {
		// strpbrk 함수는 첫번째 인수로 주어진 문자열에서 두번째 인수로 주어진
		// 문자열에 속해 있는 문자 중 가장 먼저 발견된 문자를 찾아 그 번지를 
		// 리턴하는 기능
		strPos = strpbrk( strPos, strSeparate);

		if (strPos != NULL) {
			printf("%s\t\t%p\n", strPos, &strPos);
			// 이게 핵심이네~ 여기서 문자열을 하나씩 뒤로 전진
			// 시켜주니, 자연스럽게 다음 Separate가 잡히는 것
			++strPos; 
			//printf("%s\t\t%p\n", strPos, &strPos);
		}
	}
	while( strPos != NULL);

	return 0;
}	
