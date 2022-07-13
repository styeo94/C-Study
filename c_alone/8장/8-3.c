#include <stdio.h>

int main() {

	char str[] = "Programming";
	char *ptr1;

	ptr1 = &str[0];

	printf("%p\n", ptr1);
	printf("%p\n", ptr1 + 1);
	printf("%c\n", *(ptr1 + 1));

	printf("%p\n", ptr1 + 3);
	printf("%c\n", *(ptr1 + 3));

	return 0;
}
