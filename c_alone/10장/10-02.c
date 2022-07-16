#include <stdio.h>

int func(int *pArr, int size);

int main() {
	int arr[] = {1,2,3,4,5};
	int sumArr, sizeArr;

	sizeArr = sizeof(arr)/sizeof(int);
	printf("sizeof(arr) : %ld\n", sizeof(arr));
	printf("sizeof(int) : %ld\n", sizeof(int));
	sumArr = func(arr, sizeArr);
	printf("배열의 총 합은 : %d\n", sumArr);

	return 0;
}

int func(int *pArr, int size) {
	int i, sum = 0;
	for(int i = 0; i < size; i++) {
		sum += *(pArr +i);
	}

	return sum;
}
