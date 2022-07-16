#include <stdio.h>

int func(int pArr[], int size);

int main() {

	int arr[] = {1,2,3,4,5};
	int sumArr, sizeArr;
	sizeArr = sizeof(arr)/sizeof(int);
	sumArr = func(arr, sizeArr);
	printf("배열의 총 합은 : %d\n", sumArr);

	return 0;
}

int func(int pArr[], int size) {
	int sum = 0;

	int temp = 100;

//	pArr = &temp;
	printf("pArr의 주소 : %p\n", pArr);
	for(int i = 0 ; i < size; i++) {
		sum += pArr[i];
		printf("pArr[%d]의 주소 : %p\n", i, &pArr[i]);
		printf("pArr[%d]의 값 : %d\n", i, pArr[i]);
	}
	pArr = &temp;
	printf("pArr의 바뀐 주소 : %p\n", pArr);
	return sum;
}
