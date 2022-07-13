#include <stdio.h>

int main() {
	int arr[] = {1,2,3,4,5};

	printf("배열의 요소 출력 : ");
	for(int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	printf("배열의 주소 출력 : ");
	for (int i = 0; i < 5; i++){
		printf("%p ", &arr[i]);
	}
	printf("\n\n");

	printf("배열의 이름 출력 : %p\n", arr);

	return 0;
}
