#include <stdio.h>

int main() {

	int arr[] = {1,2,3,4,5};
	int *pTemp;
	int i;

	pTemp = arr;

	printf("배열의 요소 출력 : ");
	for (i=0; i < 5; i++) {
		printf("%d ", pTemp[i]);
	}

	printf("\n");

	return 0;
}
