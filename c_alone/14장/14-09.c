#include <stdio.h>
#include <string.h>

/*
   memcmp 함수의 원형
   void* memcmp(const void* ptr1, const void* ptr2, size_t num);
*/

int main() {
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[10] = {1,2,3,4,5};

	//if (memcmp(arr1, arr2, sizeof(int)*5) == 0){
	if (memcmp(arr1, arr2, sizeof(int)*6) == 0){
		printf("arr1 과 arr2 는 일치! \n");
	} else {
		printf("arr1 과 arr2 는 일치 안함 \n");
	}

	return 0;
}
