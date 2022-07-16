#include <stdio.h>
#include <stdlib.h>

// realloc 은 동적 재할당으로, 만약 공간이 부족하면, 아예 새로운 위치로 연속해서 재할당하는 특징이 있음.
int main(){
	
	int i;
	int *arr = (int*)malloc(sizeof(int)*5);
	int *rearr;

	for (i = 0; i < 5; i++) {
		arr[i] = i + 1;
	}	


	rearr = (int*)realloc(arr, sizeof(int) *10);

	for (i = 5 ; i < 10 ; i++) {
		rearr[i] = i +1;
	}

	for (i = 0 ; i < 10; i++) {
		printf("%d\n", rearr[i]);
	}
	
	free(rearr);

	return 0;
}
