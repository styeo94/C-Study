#include <stdio.h>

int main() {
	int arr[] = {1,2,3};
	void *pA;

	pA = arr;
	pA = (int*)pA + 1;

	printf("이동한 *pA의 출력 : %d\n", *(int*)pA);
			
	return 0;
}
