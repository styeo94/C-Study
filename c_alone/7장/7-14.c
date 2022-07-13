#include <stdio.h>

int main(){
	int aSize, index, total = 0;
	int aSize2 = 0;
	int arr[][3] = {
		{1,2,3},
		{4,},
		{5,6},
		{7,8,9}
	};

	aSize = sizeof(arr)/sizeof(arr[0][0]);
	printf("sizeof(arr) : %ld\n", sizeof(arr));
	printf("sizeof(arr[0][0]) : %ld\n", sizeof(arr[0][0]));
	printf("aSize : %d\n", aSize);
	
	aSize2 = aSize/sizeof(arr[0][0]);
	index = aSize / aSize2;

	for (int i = 0; i< index; i++) {

		for (int j = 0; j < aSize2; j++)
			total = total + arr[i][j];
	}

	printf("배열 요소의 총 합은 = %d\n", total);

	return 0;
}
