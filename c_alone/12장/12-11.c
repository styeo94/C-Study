#include <stdio.h>
#include <string.h>

int main() {
	char str[20];
	puts("퀴즈 : 세상에서 가장 멋진 사람은?");
	fgets(str, sizeof(str), stdin);

	printf("받은 값 : %s\n", str);

	if (!strcmp(str, "me")) {
		printf("정답입니다. 건방지시네요.\n");
	} else {
		printf("오답입니다. 겸손하시군요. \n");
	}

	
	return 0;
}
