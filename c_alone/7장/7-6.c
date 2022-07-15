#include <stdio.h>

int main() {
	int temp = 0;
	int size = 0;
	int arr[7] = {1,2,3,4,5,6,7};

	size = sizeof(arr)/sizeof(arr[0]);

	for (int i = 0 ; i < size/2 ; i++){
		temp = arr[i];
		arr[i] = arr[size -i -1];
		arr[size -i -1] = temp;
	}

	for (int i = 0; i < size; i++) {
		printf("array arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
