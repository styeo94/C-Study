#include <stdio.h>
#include <string.h>

int main() {
	char dest[100] = "I am";
	char src1[] = " not a student";
	char src2[] = " a nice guy";

	strncat(dest, src1, 4);
	puts(dest);
	strcat(dest, src2);
	puts(dest);

	return 0;
}
