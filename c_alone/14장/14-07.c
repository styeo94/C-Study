#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

/*
   memcpy 함수의 원형
   void* memcpy(void* dest, void* src, size_t count);

   strcpy 와 비슷하지만, strcpy는 오로지 char* 자료형만 사용
   memcpy의 경우는 char* 뿐만 아니라, int, 배열, 구조체 등과 같은 모든 자료형에 사용 가능.
*/
int main() {
	int* arr1 = (int*)malloc(sizeof(int)*5);
	int arr2[5];
	int i;

	for (i=0; i<5; i++) {
		arr1[i] = i + 1;
	}

	memcpy(arr2, arr1, sizeof(int) *5);
	printf("==== 메모리 복사 출력 ==== \n");

	for (i=0; i < 5; i++) {
		printf("%d\n", arr2[i]);
	}
	
	free(arr1);
	
	return 0;
}
