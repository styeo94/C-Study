#include <stdio.h>

int main() {

	char str[] = "Programming";
	char *ptr1, *ptr2;

	ptr1 = &str[0];
	ptr2 = &str[7];
	printf("ptr1 %p\n", ptr1);
	printf("ptr2 %p\n", ptr2);
	printf("두 포인터 간의 차는 %ld입니다.\n", ptr2 - ptr1);

	return 0;
}
