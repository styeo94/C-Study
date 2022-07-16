#include <stdio.h>

int main() {

	char str[] = "Hello\0World";
	printf("str = %s \n", str);

	str[3] = '\0';
	printf("str = %s \n", str);
	str[0] = '\0';
	printf("str = %s \n", str);

	return 0;
}
