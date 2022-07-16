#include <stdio.h>
#include <stdlib.h>

int main() {
	int num ;
	int* student;

	fputs("학생수를 입력하세요 : ", stdout);
	scanf("%d", &num);

	student = (int*)malloc(sizeof(int) * num);

	if (student == NULL) {
		printf("메모리가 부족하여 메모리를 할당할 수 없습니다.\n");
		return 0;
	}

	printf("할당된 메모리의 크기는 %ld 입니다.\n", sizeof(int) * num);
	printf("할당된 메모리의 크기는 %ld 입니다.\n", sizeof(student));

	free(student);

	return 0;
}
