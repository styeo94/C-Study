#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

/*
   calloc 함수의 원형
   void* calloc(size_t elt_count, size_t elt_size);
*/

int main() {

	int* arr = (int*)malloc(sizeof(int)*10);
	int i;

	printf("==== 메모리 초기화 전 ====\n");
	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}

	memset(arr, 0, sizeof(int)*10);
	printf("==== 메모리 초기화 후 ====\n");

	for (i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	
	free(arr);

	return 0;
}
