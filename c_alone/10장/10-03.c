#include <stdio.h>

int func(int pArr[], int size);

int main() {
	int arr[] = {1,2,3,4,5};
	int sumArr, sizeArr;

	printf("배열의 이름은 : %p\n", &arr); 
	sizeArr = sizeof(arr)/sizeof(int);
	sumArr = func(arr, sizeArr);
	printf("배열의 총 합은 : %d\n", sumArr);


	return 0;
}



int func(int pArr[], int size){
	int i, sum = 0;
	printf("pArr 배열의 이름은 : %p\n", &pArr);
	for (i = 0; i < size; i++) {
		sum += pArr[i];
		printf("pArr 배열의 상세주소는 : %p\n", &pArr[i]); 
	}
	return sum;
}
