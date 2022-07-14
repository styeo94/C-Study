#include <stdio.h>
#include <string.h>

int main()  {
	char str[100] = "Have a nice day";
	int len = 0;

	len = strlen(str);

	printf("문자열의 길이는 %d 입니다. \n", len);

	return 0;
}
