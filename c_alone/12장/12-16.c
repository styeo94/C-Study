#include <stdio.h>
#include <string.h>

int main() {
	char string[] = "사자/호랭이/곰/토끼/기린/코끼리/낙타";
	char strSeparate[] = "/";
	char *strPos;

	strPos = strtok(string, strSeparate);
	printf("strPos : %s\n\n", strPos);
	printf("strPos : %s\n\n", strPos+1);
	//while (strPos != NULL) {
	//	puts(strPos);
	//	strPos = strtok(NULL, strSeparate);
	//}
	return 0;
}
