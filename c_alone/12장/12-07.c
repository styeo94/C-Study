#include <stdio.h>
#include <string.h>

int main() {
	
	char str1[11] = "SmartPhone";
	char str2[11] = "Inter00000";

	strncpy(str2, str1, 5);
	//strcpy(str2, str1);
	puts(str2);

	return 0;
}
