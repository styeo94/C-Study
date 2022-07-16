#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
   memmove 함수의 원형
   void* memmove(void* dest, void* src, size_t count);

*/
int main() {
	int* arr1 = (int*)malloc(sizeof(int)*15);
	int arr2[5] = {-1,-2,-3,-4,-5};
	int i;

	for (i = 0; i< 10; i++) {
		arr1[i] = i + 1;
	}

	printf("==== 메모리 이동 전 출력 ====\n");
	for (i = 0 ; i < 10; i ++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");

	
	printf("==== 중간 초기값  ====\n");
	for (i=0; i < 15; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	
	memmove(arr1 + 10, arr1 +5, sizeof(int) *5);
	printf("==== 메모리 이동한 후 출력  ====\n");
	for (i=0; i < 15; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	memcpy(arr1 + 5, arr2, sizeof(int) *5);
	printf("==== 메모리 복사 후 출력 ====\n");

	for (i=0; i < 15; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	free(arr1);

	return 0;
}
