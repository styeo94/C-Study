#include <stdio.h>
#include <string.h>

int main() {
	int ret1, ret2, ret3;
	char s1[] = "ABC";
	char s2[] = "ABC";
	char s3[] = "ABB";
	char s4[] = "ABD";

	ret1 = strcmp(s1, s2);
	ret2 = strcmp(s1, s3);
	ret3 = strcmp(s1, s4);

	printf("ret1의 결과값 : %d\n", ret1);
	printf("ret2의 결과값 : %d\n", ret2);
	printf("ret3의 결과값 : %d\n", ret3);

	return 0;
}
