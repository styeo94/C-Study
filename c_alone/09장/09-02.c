#include <stdio.h>

int main() {
	int arr[] = {1,2,3,4,5};
	int i;

	printf("배열의 요소 출력 : ");
	for (i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("배열 이름을 이용한 배열 요소 출력 : ");
	for (i = 0 ; i < 5 ; i++) {
		printf("%d ", *(arr + i));
	}
	printf("\n\n");


	return 0;
}
