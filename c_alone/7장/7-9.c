#include <stdio.h>

int main() {

	char str[100] = "Beautiful";

	for(int i = 0; i < 10; i++)
		printf("%c ", str[i]);

	printf("\n");
	printf("str = %s \n", str);

	return 0;
}
