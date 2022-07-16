#include <stdio.h>

int main() {
	char str[] = "Have a nice day";

	puts(str);

	fputs(str, stdout);
	fputs("\n", stdout);

	return 0;
}
