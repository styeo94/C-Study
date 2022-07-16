#include <stdio.h>
#include <stdlib.h>
/*
   callc 함수의 원형
   void& calloc(size_t elt_count, size_t elt_size); 
*/



int main() {
	int num, i, total = 0;
	int* student;

	fputs("학생수를 입력하세요 : ", stdout);
	scanf("%d", &num);

	student = (int*)calloc(num, sizeof(int));

	if(student == NULL) {
		printf("메모리가 부족하여 메모리를 할당할 수 없습니다.\n");
		return 0;
	}

	for (i = 0; i < num; i++) {
		printf("%d번째 학생의 성적 입력 : ", i+1);
		scanf("%d", &student[i]);
	}

	for (i = 0 ; i < num; i++) {
		total += student[i];
	}

	printf("총점 : %d, 평균 : %d \n", total, total / num);

	free(student);
	return 0;

}
