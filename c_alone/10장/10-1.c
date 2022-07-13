#include <stdio.h>

void func(int *pArr);

int main() {
	int arr[] = {1,2,3,4,5};

	func(arr);

	for(int i = 0; i < 5 ; i++) {
		printf("배열의 요소 출력 : %d\n", arr[i]);
	}
	return 0;
}

void func(int *pArr) {
	for (int i = 0; i < 5; i++) {
		printf("함수 안에서 배열의 요소* 출력 : %d\n", *(pArr + i));
		printf("함수 안에서 배열의 주소 출력 : %p\n", pArr + i);
	}
	printf("\n");
}
